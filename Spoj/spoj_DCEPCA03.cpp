#include <bits/stdc++.h>
#define Max 10006
using namespace std;

int phi[Max];
bool mark[Max];
long long int ans[Max];

void Euler_Sieve_phi(){
    for(int i=1;i<Max;i++) phi[i]=i;
    mark[1]=true;

    for(int i=2;i<Max;i++){
        if(!mark[i]){
            for(int j=i;j<Max;j+=i){
                mark[j]=true;
                phi[j]=phi[j]/i*(i-1);
            }
        }
    }
}

void calculate(){
    long long int sum[Max];
    sum[1]=phi[1];
    for(int i=2;i<Max;i++) sum[i]=sum[i-1]+phi[i];

    for(int i=1;i<Max;i++){
        for(int j=1;j<=i;j++){
            ans[i]=ans[i]+phi[j]*sum[i];
        }
    }
}

int main(){
    Euler_Sieve_phi();
    calculate();
    int test;
    scanf("%d",&test);
    while(test--){
        int n;
        scanf("%d",&n);
        printf("%lld\n",ans[n]);
    }
    return 0;
}
