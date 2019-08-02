#include <bits/stdc++.h>
#define MAX 1000005
using namespace std;

bool arr[MAX];
vector<int>prime;
int maximumFactor[MAX];

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

int totalPower(int n){
    int count=0;
    for(int i=0;i<prime.size() and prime[i]<=sqrt(n);i++)
        while(n%prime[i]==0){
            count++;
            n/=prime[i];
        }
    if(n!=1) count++;
    return count;
}

void preCalculate(){
    maximumFactor[0]=maximumFactor[1]=0;
    maximumFactor[2]=1;
    for(int i=3;i<MAX;i++)
        maximumFactor[i]=maximumFactor[i-1]+totalPower(i);
}

int main(){
    sieve();
    preCalculate();
    int n;
    while(scanf("%d",&n)!=EOF)
        printf("%d\n",maximumFactor[n]);
    return 0;
}
