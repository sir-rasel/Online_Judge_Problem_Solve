#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;


int main() {
    int test;
    scanf("%d",&test);
    while(test--){
        ll a,b,x,y,n;
        scanf("%lld %lld %lld %lld %lld",&a,&b,&x,&y,&n);

        ll ans = x*y;
        ll d = (a-x) + (b-y);

        if(d>n){
            ll d1 = (a-x);
            ll d2 = (b-y);
            ans = LLONG_MAX;

            if(d1<=n){
                ll t = b - min(n-d1,b-y);
                ans = min(ans, x*t);
            }
            else
                ans = min(ans, (a-n)*b);


            if(d2<=n){
                ll t = a - min(n-d2,a-x);
                ans = min(ans, y*t);
            }
            else
                ans = min(ans, a*(b-n));
        }

        printf("%lld\n",ans);
    }

    return 0;
}
