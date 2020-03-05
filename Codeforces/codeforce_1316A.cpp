#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        int n,m;
        scanf("%d %d",&n,&m);
        ll sum=0;
        ll f=0;
        for(int i=0;i<n;i++){
            int sc;
            scanf("%d",&sc);
            if(i==0) f=sc;
            sum+=sc;
        }
        if(sum<=m) {
            f=sum;
        }
        else {
            f = (ll) m;
        }
        printf("%lld\n",f);
    }
    return 0;
}
