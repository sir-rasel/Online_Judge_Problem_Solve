#include <bits/stdc++.h>
#define Max 1005
using namespace std;

bool prime[Max];

void sieve(){
    for(int i=0;i<=Max;i++) prime[i]=true;
    prime[0]=false;
    prime[1]=false;
    int sq=sqrt(Max);
    for(int i=2;i<=sq;i++){
        if(prime[i]){
            for(int j=i*i;j<=Max;j+=i){
                prime[j]=false;
            }
        }
    }
}

int main(){
    sieve();
    int n;
    cin>>n;
    for(int i=0;i<=n;i++){
        if(prime[i]) cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}
