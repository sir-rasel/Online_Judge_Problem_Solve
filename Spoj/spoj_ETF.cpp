#include <bits/stdc++.h>
#define Max 1000006
using namespace std;

int phi[Max];
bool mark[Max];

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

int main(){
    Euler_Sieve_phi();
    int test;
    scanf("%d",&test);
    while(test--){
        int n;
        scanf("%d",&n);
        printf("%d\n",phi[n]);
    }
    return 0;
}
