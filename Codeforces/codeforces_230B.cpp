#include <bits/stdc++.h>
#define MAX 10000000
using namespace std;

bool arr[MAX];

void sieve(){
    int k=sqrt(MAX);
    arr[0]=arr[1]=true;
    for(int i=4;i<MAX;i+=2) arr[i]=true;
    for(int i=3;i<=k;i+=2)
        if(!arr[i])
            for(int j=i*i;j<MAX;j+=2*i)
                arr[j]=true;
}

int main(){
    sieve();
    int test;
    scanf("%d",&test);
    while(test--){
        long long int n;
        scanf("%lld",&n);
        long long int k = sqrt(n);
        if(!arr[k] and k*k==n) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
