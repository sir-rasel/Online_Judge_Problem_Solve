#include<bits/stdc++.h>
using namespace std;

const int maxx = 10000;

bool mark[maxx];
vector<int>prime;
vector<int>luckyNumber;

void sieve(){
    for(int i=3;i*i<maxx;i+=2)
        if(!mark[i])
            for(int j=i*i;j<maxx;j+=2*i)
                mark[j]=true;

    prime.push_back(2);
    for(int i=3;i<maxx;i+=2)
        if(!mark[i])
            prime.push_back(i);
}

bool factorize(int n){
    int counter=0;
    for(int i=0;prime[i]*prime[i]<=n;i++){
        if(n%prime[i]==0){
            counter++;
            while(n%prime[i]==0) n/=prime[i];
            if(counter>=3) return true;
        }
    }
    if(n!=1) counter++;
    if(counter>=3) return true;
    else return false;
}

void LuckyNumberCompute(){
    sieve();
    luckyNumber.push_back(0);
    for(int i=30;i<10000;i++)
        if(factorize(i)) luckyNumber.push_back(i);
}

int main(){
    LuckyNumberCompute();
    int test;
    scanf("%d",&test);
    while(test--){
        int n;
        scanf("%d",&n);
        printf("%d\n",luckyNumber[n]);
    }
    return 0;
}
