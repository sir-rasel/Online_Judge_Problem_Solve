#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

int main(){
    int n, k;
    scanf("%d %d",&n,&k);
    vector<pii> v;

    for(int i=0;i<n;i++) {
        int x, y;
        scanf("%d %d",&x,&y);
        v.push_back({y, x});
    }
    sort (v.begin(), v.end());

    int cnt = 0;
    multiset <int> p;

    for(int i=0;i<k;i++) p.insert(0);

    for (auto i:v) {
        auto it = p.upper_bound(i.second);
        if (it == p.begin())
            continue;

        it--;
        cnt++;

        p.erase(it);
        p.insert(i.first);
    }

    printf("%d\n",cnt);

    return 0;
}
