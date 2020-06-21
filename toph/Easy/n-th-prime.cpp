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

int main(){
    sieve();
    int n;
    scanf("%d",&n);
    printf("%d\n",prime[n-1]);
    return 0;
}
