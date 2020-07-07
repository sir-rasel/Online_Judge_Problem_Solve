#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

const int mod = 1e9+7;
const int Max = 2e8;
const double eps = 1e-4;

int main(){
    int test;
    scanf("%d",&test);
    for(int i=0;i<test;i++){
        int n;
        scanf("%d",&n);
        ll a,b,c,m;
        scanf("%lld %lld %lld %lld",&a,&b,&c,&m);
        stack<pii>arr;

        ll v = b%m;
        a %= m, c%=m;
        ll ans = 0, maxx = LONG_MIN, minn = LONG_MAX;
        for(int j=0;j<n;j++){
            ll beauty;
            v = (v*a)+c;
            ll d = v/m;
            v = (v - (d*m));
            if(v&1LL) {
                if(maxx == 0 and minn == 0 and arr.empty()){
                    maxx = v;
                    minn = v;
                }
                else{
                    maxx = max(maxx,v);
                    minn = min(minn,v);
                }

                beauty = (maxx + minn);
                arr.push({maxx,minn});
            }
            else{
                if(arr.empty())
                    beauty = 0;
                else if(arr.size()==1){
                    arr.pop();

                    maxx = 0;
                    minn = 0;
                    beauty = 0;
                }
                else{
                    arr.pop();
                    pii t = arr.top();

                    maxx = t.first;
                    minn = t.second;

                    beauty = (maxx+minn);
                }
            }
            ans ^= beauty;
        }

        printf("%lld\n",ans);
    }
    return 0;
}
