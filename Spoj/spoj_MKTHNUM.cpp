#include<bits/stdc++.h>
#define all(v) v.begin(), v.end()
using namespace std;

typedef long long int ll;
const int maxn = 1e5+10;
vector<int> tree[4*maxn];
vector<int>v;
int n, m, arr[maxn];

void buildTree(int node, int l, int r){
    if(l == r){
        tree[node].push_back(arr[l]);
        return;
    }
    int mid = l + r >> 1,left = node << 1, right = left|1;

    buildTree(left, l, mid);
    buildTree(right, mid+1, r);

    merge(all(tree[left]), all(tree[right]),back_inserter(tree[node]));
}

int query(int node, int l, int r, int i, int j, int k){
    if(i > r || l > j) return 0;
    if(i <= l && r <= j)
        return upper_bound(all(tree[node]), k) - tree[node].begin();
    int mid = l + r >> 1,left = node << 1, right = left|1;
    return query(left, l, mid, i, j, k) + query(right, mid+1, r, i, j, k);
}

int main(){
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++) {
        scanf("%d",&arr[i]);
        v.push_back(arr[i]);
    }
    sort(all(v));
    for(int i=1;i<=n;i++) arr[i] = lower_bound(all(v),arr[i]) - v.begin() + 1;
    buildTree(1,1,n);

    while(m--){
        int l,r,k;
        scanf("%d %d %d",&l,&r,&k);
        int low = 1, high = n , mid, ans ;
        while(low <= high) {
            mid = low + high >> 1;
            int x = query(1,1,n,l,r,mid);
            if(x >= k) {
                ans = mid;
                high = mid-1;
            }
            else low = mid+1;
        }
        printf("%d\n",v[ans-1]);
    }
    return 0;
}
