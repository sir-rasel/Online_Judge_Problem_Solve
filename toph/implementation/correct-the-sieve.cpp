#include<bits/stdc++.h>
using namespace std;

const int MX = 1000005;
bool prime[MX];

void sieve(){
    prime[0]=prime[1]=true;
    for(int i=4;i<MX;i+=2) prime[i]=true;
    int sqt=sqrt(MX);
    for(int i=3;i<=sqt;i+=2)
        if(!prime[i])
            for(int j=i*i;j<MX;j+=(2*i))
                prime[j]=true;
}

int main(){
    sieve();
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int num;
        scanf("%d",&num);
        if(prime[num]) printf("%d is not a prime number.\n",num);
        else printf("%d is a prime number.\n",num);
    }
    return 0;
}
