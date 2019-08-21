#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
const int maxx = 1e5+5;

ll bowler[maxx],cumulative[maxx];

void init(){
    memset(bowler,0,sizeof bowler);
    memset(cumulative,0,sizeof cumulative);
}

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        ll n,m,x;
        scanf("%lld %lld %lld",&n,&m,&x);

        init();

        for(int i=0;i<n;i++) {
            ll economy;
            scanf("%lld",&economy);
            economy%=m;
            bowler[economy]++;
        }

        for(int i=1;i<m;i++) cumulative[i]=cumulative[i-1]+bowler[i];
        cumulative[m]=cumulative[m-1]+bowler[0];

        ll ans=0;
        for(int i=0;i<m;i++){
            if(i<=x){
                ans+=(cumulative[x-i]*bowler[i]);
                ans+=(cumulative[m]-cumulative[m-i-1])*bowler[i];
            }
            else ans+=(cumulative[m+x-i]-cumulative[m-i-1])*bowler[i];
        }
        printf("%lld\n",ans);
    }
    return 0;
}
