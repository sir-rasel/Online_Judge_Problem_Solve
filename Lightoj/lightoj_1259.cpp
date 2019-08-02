#include <bits/stdc++.h>
#define MAX 10000005
using namespace std;

bool arr[MAX];
vector<int>prime;

void sieve(){
    int k=sqrt(MAX);
    arr[0]=arr[1]=true;
    for(int i=4;i<MAX;i+=2) arr[i]=true;
    for(int i=3;i<=k;i+=2)
        if(!arr[i])
            for(int j=i*i;j<MAX;j+=2*i)
                arr[j]=true;

    prime.push_back(2);
    for(int i=3;i<MAX;i+=2)
        if(!arr[i])
            prime.push_back(i);
}

int main(){
    sieve();
    int test,cs=1;
    scanf("%d",&test);
    while(test--){
        int n;
        scanf("%d",&n);
        int ans=0;
        for(int i=0;prime[i]<=n/2;i++)
            if(!arr[n-prime[i]]) ans++;
        printf("Case %d: %d\n",cs++,ans);
    }
    return 0;
}
