#include <bits/stdc++.h>
#define MAX 100000005
using namespace std;

bool arr[MAX];
vector<int>prime;

void sieve(){
    int k=sqrt(MAX);
    for(int i=3;i<=k;i+=2)
        if(!arr[i])
            for(int j=i*i;j<MAX;j+=2*i)
                arr[j]=true;

    prime.push_back(2);
    for(int i=3;i<MAX;i+=2)
        if(!arr[i])
            prime.push_back(i);
}

long long int nod(long long int n){
    int count=0;
    long long int ans=-1;
    for(int i=0;i<prime.size() and prime[i]<=sqrt(n);i++){
        if(n%prime[i]==0){
            count++;
            while(n%prime[i]==0) n/=prime[i];
            ans=prime[i];
        }
    }
    if(n!=1) ans=n,count++;
    if(count<2) return -1;
    else return ans;
}

int main(){
    sieve();
    long long int n;
    while(scanf("%lld",&n) and n) {
        if(n<0) n*=-1;
        printf("%lld\n",nod(n));
    }
    return 0;
}
