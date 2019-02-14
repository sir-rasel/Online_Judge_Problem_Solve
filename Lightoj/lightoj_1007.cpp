#include <bits/stdc++.h>
#define maxx 5000003
using namespace std;

int phi[maxx];
unsigned long long mark[maxx];

void sievephi(){
    for(int i=1;i<maxx;i++) phi[i]=i;
    mark[1]=1;

    for(int i=2;i<maxx;i+=2){
        if(i!=2) mark[i] = 1;
        phi[i]=phi[i]/2;
    }

    for(int i=3;i<maxx;i+=2){
        if(!mark[i]){
            phi[i] = phi[i] - 1;
            for(int j=2*i;j<maxx;j+=i){
                mark[j]=1;
                phi[j] = phi[j]/i*(i-1);
            }
        }
    }
}

void precalculate(){
    mark[1] = 0;

    for(int i=2; i<maxx; i++){
        mark[i] = phi[i];
        mark[i]*=phi[i];
        mark[i]+=mark[i-1];
    }
}


int main(){
    sievephi();
    precalculate();
    int test;
    scanf("%d",&test);
    for(int cs=1;cs<=test;cs++){
        int a,b;
        scanf("%d %d",&a,&b);
        unsigned long long int res = mark[b]-mark[a-1];
        printf("Case %d: %llu\n",cs,res);
    }
    return 0;
}
