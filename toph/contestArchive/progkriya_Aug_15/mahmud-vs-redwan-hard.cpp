#include<bits/stdc++.h>
using namespace std;

const int MAXX = 1007;
typedef long long int ll;

int N;
ll D;
pair<ll,ll>points[MAXX];

ll solve(){
    vector<pair<ll,ll> >slopes;
    map<pair<ll,ll>,bool>check;
    ll x, y, g;
    for(int i=0;i<N;i++){
        for(int j=i+1; j<N; j++){
            y = points[j].second - points[i].second;
            x = points[j].first - points[i].first;
            g =__gcd(x,y);
            x /= g;
            y /= g;
            if(x < 0){
                x = -x;
                y = -y;
            }
            else if(x==0) y = 1;
            if(check.count({x,y})==0){
                slopes.push_back({x,y});
                check[{x,y}]=true;
            }
        }
    }
    return D * slopes.size();
}



int main (){
    int test, cs=1;
    scanf("%d",&test);
    while(test--){
        scanf("%d %lld", &N, &D);
        for(int i=0;i<N;i++)
            scanf("%lld %lld",&points[i].first, &points[i].second);
        printf("Case %d: %lld\n",cs++,solve());
    }
    return 0;
}
