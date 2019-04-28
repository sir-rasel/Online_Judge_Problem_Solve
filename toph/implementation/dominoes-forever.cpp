#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll pi[1005],hi[1005];
int dominoEffect[1005];

void calculate(int u,int n){
    ll val=pi[u]+hi[u],ans=1;
    for(int v=u+1;v<n;v++){
        if(val>pi[v]) ans++;
        val = max(val,pi[v]+hi[v]);
    }
    dominoEffect[u]=ans;
}

int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%lld",&hi[i]);
    for(int i=0;i<n;i++) scanf("%lld",&pi[i]);
    for(int i=0;i<n;i++) calculate(i,n);
    int q;
    scanf("%d",&q);
    while(q--){
        int pos;
        scanf("%d",&pos);
        printf("%d\n",dominoEffect[pos-1]);
    }
    return 0;
}
