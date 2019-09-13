#include<bits/stdc++.h>
using namespace std;

const int sz = 1000005/2;
vector<int>prime;
bool mark[sz];

void sieve(){
    for(int i=3;i*i<sz;i+=2)
        if(!mark[i])
            for(int j=i*i;j<sz;j+=2*i)
                mark[j]=true;
    prime.push_back(2);
    for(int i=3;i<sz;i+=2)
        if(!mark[i]) prime.push_back(i);
}

int squreFreeDivisor(int n){
    int counter=1;
    for(int i=0;prime[i]*prime[i]<=n;i++){
        if(n%prime[i]==0){
            int temp = n,c=0;
            while(temp%prime[i]==0){
                temp/=prime[i];
                c++;
            }
            counter = max(counter,c);
        }
    }
    return counter;
}

int main(){
    sieve();
    int test;
    scanf("%d",&test);
    while(test--){
        int n;
        scanf("%d",&n);
        printf("%d\n",squreFreeDivisor(n));
    }
    return 0;
}
