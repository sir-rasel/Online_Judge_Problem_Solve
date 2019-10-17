#include <bits/stdc++.h>
using namespace std;

const int maxn = 2e5 + 1010;
typedef long long int ll;

struct NODE {
    int va,ans;
}node[maxn];

int n,k,num[maxn];

void init() {
    scanf("%d %d",&n,&k);
    for(int i=1;i<=n;i++) {
        scanf("%d",&node[i].va);
        num[i] = node[i].va;
    }
    sort(num+1,num+1+n);

    for(int i=1;i<=n;i++) {
        NODE k = node[i];
        node[i].ans =  lower_bound(num+1,num+1+n,k.va) - num - 1;
    }
}

int main() {
    init();
    while(k--) {
        int a,b;
        scanf("%d %d",&a,&b);
        if(node[a].va < node[b].va) {
            node[b].ans--;
        } else if(node[b].va < node[a].va) {
            node[a].ans--;
        }
    }
    for(int i=1;i<=n;i++)
        printf("%d ",node[i].ans);
    return 0;
}
