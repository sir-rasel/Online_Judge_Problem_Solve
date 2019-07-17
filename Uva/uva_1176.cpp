#include <bits/stdc++.h>
using namespace std;

const int maxn = 32770;

int serviver[maxn]={0};
int ans[maxn]={0};

void preJosephusCalculate(){
    for (int i = 2; i < maxn; i++)
		serviver[i] = (serviver[i-1]+2)%i;
}

void calculateAns(){
    for(int i=1;i<maxn;i++){
        serviver[i]+=1;
        if(serviver[i]==i) ans[i]=i*2;
        else ans[i]=(i-serviver[i])+(ans[serviver[i]]);
    }
}

int main(){
    preJosephusCalculate();
    calculateAns();
    int n;
    while(scanf("%d",&n)==1){
        printf("%d\n",ans[n]);
    }
    return 0;
}
