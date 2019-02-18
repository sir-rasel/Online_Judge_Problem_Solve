#include <bits/stdc++.h>
#define MAXN 100005
#define INF 1000005
using namespace std;

int segmentTree[4*MAXN];
int arr[MAXN],n,q;

void buildTree(int nod,int start,int finish){
    if(start == finish){
        segmentTree[nod]=arr[start];
        return;
    }

    int left = nod*2;
    int right = nod*2+1;
    int mid = (start+finish)/2;

    buildTree(left,start,mid);
    buildTree(right,mid+1,finish);

    segmentTree[nod] = min(segmentTree[left],segmentTree[right]);
}

int query(int nod,int start,int finish,int l,int r){
    if(l>finish or r<start) return INF;
    if(l<=start and r>=finish) return segmentTree[nod];

    int left = nod*2;
    int right = nod*2+1;
    int mid = (start+finish)/2;

    int min1 = query(left,start,mid,l,min(mid,r));
    int min2 = query(right,mid+1,finish,max(l,mid+1),r);

    return min(min1,min2);
}

int main(){
    int test,cs=1;
    scanf("%d",&test);
    while(test--){
        printf("Case %d:\n",cs++);
        scanf("%d %d",&n,&q);
        for(int i=1;i<=n;i++) scanf("%d",&arr[i]);
        buildTree(1,1,n);
        while(q--){
            int l,r;
            scanf("%d %d",&l,&r);
            printf("%d\n",query(1,1,n,l,r));
        }
    }
    return 0;
}
