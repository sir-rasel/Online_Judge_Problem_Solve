#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int mp[1002],fr[1002];

int main(){
    int test , cs = 1;
    scanf("%d",&test);
    while(test--){
        int n , m;
        scanf("%d%d",&n,&m);
        vector<pair<ll,int> >S(n);
        for(int i = 0; i<n; i++){
            scanf("%lld",&S[i].first);
            S[i].second=i;
        }
        sort(S.begin(),S.end());
        for(int i = 0; i<n; i++) mp[ S[i].second ] = i;

        printf("Case %d:\n",cs++);
        while(m--){
            int tp , l , r;
            scanf("%d%d%d",&tp,&l,&r);
            if(tp==1) reverse(mp+l-1,mp+r);
            else{
                memset(fr,0,sizeof(fr));
                for(int i = l-1; i<r; i++) fr[mp[i]]++;
                int tot = (r-l+1)/2+1 , sum = 0;
                for(int i=0;i<1000;i++){
                    sum+=fr[i];
                    if(sum>=tot){
                        printf("%lld\n",S[i]);
                        break;
                    }
                }
            }
        }
    }
    return 0;
}
