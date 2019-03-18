#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

typedef tree< pair<int, int>,null_type,less<pair<int, int> >,rb_tree_tag, tree_order_statistics_node_update> ordered_set;

int main(){
    ordered_set lengths;
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int l;
        scanf("%d",&l);
        lengths.insert({l,i});
    }
    for(int i=0;i<n;i++){
        int l;
        scanf("%d",&l);
        printf("%d\n",lengths.find_by_order(l-1)->first);
    }
    return 0;
}
