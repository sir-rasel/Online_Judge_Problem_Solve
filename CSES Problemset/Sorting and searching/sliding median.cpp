#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef long long int ll;
typedef tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update> indexed_set;

int main() {
    int n, k;
    scanf("%d %d",&n,&k);
    vector<int> a(n);
    for (int i = 0; i < n; i++) scanf("%d",&a[i]);

    indexed_set s;
    for (int i = 0; i < k; i++) s.insert(a[i]);

    vector<int>ans;
    for (int i = 0; i < n - k + 1; i++) {
        ans.push_back(*s.find_by_order((k + 1)/ 2 - 1));
        s.erase(s.find_by_order(s.order_of_key(a[i])));
        s.insert(a[i + k]);
    }

    for(int i=0;i<ans.size();i++){
        if(i+1 == ans.size()) printf("%d\n",ans[i]);
        else printf("%d ",ans[i]);
    }

    return 0;
}
