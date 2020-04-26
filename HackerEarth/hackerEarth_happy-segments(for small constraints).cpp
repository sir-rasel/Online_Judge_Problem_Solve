#include <bits/stdc++.h>
using namespace std;

const int MAX = 500010;
int n,m,arr[MAX],h[MAX];
map<int,int>tree[4*MAX],temp;

void buildTree(int node, int beg, int endd) {
    if(beg == endd) {
        tree[node][arr[beg]]++;
        return;
    }

    int left = node*2;
    int right = node*2+1;
    int mid = (beg+endd)/2;

    buildTree(left, beg, mid);
    buildTree(right, mid+1, endd);

    for(auto it:tree[left])
        tree[node][it.first] += it.second;
    for(auto it:tree[right])
        tree[node][it.first] += it.second;
}

void query(int node, int beg, int endd, int x, int y) {
    if(x>y) return;
    if(beg == x && endd == y) {
        for(auto it:tree[node])
            temp[it.first]+=it.second;
        return;
    }

    int left = node*2;
    int right = node*2+1;
    int mid = (beg+endd)/2;

    query(left, beg, mid, x, min(y,mid));
    query(right, mid+1, endd, max(x,mid+1), y);
}

int main() {
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++) scanf("%d",&arr[i]);
    buildTree(1,1,n);
    for(int i=1;i<=m;i++) scanf("%d",&h[i]);

    int q;
    scanf("%d",&q);
    while(q--){
        int l,r;
        scanf("%d %d",&l,&r);
        temp.clear();
        query(1,1,n,l,r);

        bool flag = true;
        for(auto it:temp){
            if(it.second!=h[it.first]){
                flag = false;
                break;
            }
        }
        printf("%d\n",flag);
    }
    return 0;
}
