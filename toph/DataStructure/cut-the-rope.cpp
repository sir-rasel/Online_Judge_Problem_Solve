#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

typedef long long int ll;

typedef tree< pair<ll, int>,null_type,less<pair<ll, int> >,rb_tree_tag, tree_order_statistics_node_update> ordered_set;

int main(){
    int t,cs=1;
    scanf("%d",&t);

    while(t--){
        set<ll> cuts;
        ordered_set lengths;

        ll l, q;
        scanf("%lld %lld",&l,&q);
        int id = 0;
        cuts.insert(0);
        cuts.insert(l);
        lengths.insert({l, id});

        printf("Case %d:\n",cs++);
        getchar();
        while (q--) {
            char c;
            ll x;
            scanf("%c %lld",&c,&x);

            if (c=='C') {
                auto it = cuts.upper_bound(x);
                ll nxt = *it;
                ll prv = *(--it);
                ll len = nxt - prv;
                ll left = x-prv;
                ll right = nxt - x;

                cuts.insert(x);
                lengths.erase(lengths.upper_bound({len, -1}));
                lengths.insert({left, ++id});
                lengths.insert({right, ++id});
            }
            else printf("%lld\n",lengths.find_by_order(x-1)->first);
            getchar();
        }
    }
}
