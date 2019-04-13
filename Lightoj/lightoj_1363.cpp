#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
const double eps = 1e-9;

struct point{
    ll x, y;
    point() {}
    point(long long a, long long b) : x(a), y(b) {}
    bool operator < (const point &p) const{
        if (x == p.x) return y < p.y;
        return x < p.x;
    }
};

ll dist(ll x, ll y){
    return sqrt(1.0*x*x - 1.0*y*y);
}

bool check(vector<point> &p, ll cur, int s, ll d){
    vector<point> interval(p.size());
    for (int i = 0; i < p.size(); ++i){
        ll h = p[i].y - cur;
        if (h > d) return false;
        ll delta = dist(d,h);
        interval[i] = point(p[i].x + delta, p[i].x - delta); // (endtime, starttime)
    }
    sort(interval.begin(), interval.end());
    int parts = 0, i = 0;
    while (i < p.size()){
        ll cur = interval[i].x;
        while (interval[i].y <= cur && i < p.size()) i++;

        parts++;
        if (parts > s)
            return false;
    }
    return parts <= s;
}

ll bs(vector<point>&p,ll k,ll d,ll s){
    ll lo = k - d - 10, hi = k;
    while (lo <= hi){
        if (lo == hi){
            if (check(p, lo, s, d)) hi = lo;
            break;
        }
        ll mid = (lo + hi) >> 1;
        if (check(p, mid, s, d)) hi = mid;
        else lo = mid + 1;
    }
    return hi;
}

void solve(){
    ll k, n, s, d;
    cin >> k >> n >> s >> d;
    vector<point> p(n);
    for (int i = 0; i < n; ++i)
        cin >> p[i].x >> p[i].y;

    sort(p.begin(), p.end());

    if (!check(p, k, s, d)){
        puts("impossible");
        return;
    }
    ll hi = bs(p,k,d,s);
    printf("%lld\n", k - hi);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    for (int i = 0; i < tc; ++i){
        printf("Case %d: ", i + 1);
        solve();
    }
    return 0;
}
