#include<bits/stdc++.h>
#define MX 1010
using namespace std;

map<int,int>isprime;

void sieve(){
    isprime[0]=1;
    isprime[1]=1;
    for(int i=4;i<=MX;i+=2) isprime[i]=1;
    for(int i=3;i<sqrt(MX);i++)
        if(isprime[i]==0)
            for(int j=i*i;j<=MX;j+=2*i)
                isprime[j]=1;
}

int main(){
    sieve();
    int n;
    scanf("%d",&n);
    if(isprime[n]) printf("No\n");
    else printf("Yes\n");
    return 0;
}
