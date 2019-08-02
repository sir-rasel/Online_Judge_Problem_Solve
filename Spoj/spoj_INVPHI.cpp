#include <bits/stdc++.h>
#define MAX 200000002
using namespace std;

int phi[MAX];
int inversePhi[MAX];

void Euler_Sieve_phi(){
    phi[1]=1;
    for(int i=2;i<MAX;i++){
        if(!phi[i]){
            phi[i]=i-1;
            for(int j=(i<<1);j<MAX;j+=i){
                if(!phi[j]) phi[j]=j;
                phi[j]=phi[j]/i*(i-1);
            }
        }
    }
}

void preCalculate(){
    for(int i=1;i<MAX;i++){
        if(inversePhi[phi[i]]!=0) inversePhi[phi[i]]=min(inversePhi[phi[i]],i);
        else inversePhi[phi[i]]=i;
    }
}

int main(){
    Euler_Sieve_phi();
    preCalculate();
    int test;
    scanf("%d",&test);
    while(test--){
        int n;
        scanf("%d",&n);
        if(inversePhi[n]==0) printf("-1\n");
        else printf("%d\n",inversePhi[n]);
    }
    return 0;
}
