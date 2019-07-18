#include <bits/stdc++.h>
using namespace std;

const int maxn = 524290;
bool prime[maxn];

void sieve(){
    prime[1]=true;
    for(int i=4;i<maxn;i+=2) prime[i]=true;
    int sqt=sqrt(maxn);
    for(int i=3;i<=sqt;i+=2)
        if(prime[i]==false)
            for(int j=i*i;j<maxn;j+=(2*i))
                prime[j]=true;
}

int main(){
    sieve();
    int test;
    scanf("%d",&test);
    while(test--){
        int p;
        scanf("%d,",&p);
        if(p>19) {
            printf("No\n");
            continue;
        }
        int temp=ceil(pow(2,p))-1;
        if(prime[p]==false and prime[temp]==false)
            printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}
