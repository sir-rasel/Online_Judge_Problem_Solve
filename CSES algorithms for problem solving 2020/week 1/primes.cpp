#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
const int N = 1e7+7;

vector<int>prime;
stack<int>a,b;

void sieve(){
    vector<bool>check(N,false);

    for(int i=4;i<N;i+=2) check[i]=true;
    for(int i=3;i<=sqrt(N);i+=2)
        if(!check[i])
            for(int j=(i*i);j<N;j+=2*i)
                check[j]=true;

    for(int i=2;i<N;i++)
        if(!check[i])
            prime.push_back(i);
}

void printAns(int n){
    while(!a.empty()){
        if(a.size()==1) printf("%d\n",a.top());
        else printf("%d ",a.top());
        a.pop();
    }

    while(!b.empty()){
        if(b.size()==1) printf("%d\n",b.top());
        else printf("%d ",b.top());
        b.pop();
    }
}

void solution(int n){
    while(true){
        int res = *(upper_bound(prime.begin(),prime.end(),n));
        int boundary = res - n-1;

        for(int i=n;i>boundary;i--){
            a.push(i);
            b.push(res-i);
        }
        if(boundary<=0) break;
        n = boundary;
    }

    printAns(n);
}

int main(){
    sieve();
    int n;
    scanf("%d",&n);
    solution(n);
    return 0;
}
