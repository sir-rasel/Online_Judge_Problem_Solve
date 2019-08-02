#include <bits/stdc++.h>
#define MAX 32800
using namespace std;

typedef unsigned int lu;

bool arr[MAX];
vector<lu>prime;

void sieve(){
    prime.push_back(2);
    for(int i=1;i<MAX;i++){
        if(!arr[i]){
            int t=(2*i)+1;
            prime.push_back((lu)t);
            for(int j=i+t;j<MAX;j+=t) arr[j]=true;
        }
    }
}

lu nearestPrime(lu n){
    while(true){
        lu m=n;
        for(int i=0;prime[i]<=sqrt(n) and i<prime.size();i++)
            if(m%prime[i]==0) {
                m/=prime[i];
                break;
            }
        if(m==n) return n;
        n--;
    }
}

int main(){
    sieve();
    int test;
    scanf("%d",&test);
    while(test--){
        lu n;
        scanf("%u",&n);
        printf("%u\n",nearestPrime(n-1));
    }
    return 0;
}
