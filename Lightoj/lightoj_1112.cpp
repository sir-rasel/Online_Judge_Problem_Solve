#include<bits/stdc++.h>
#define MAXN 100005
using namespace std;

int segment[4*MAXN];
int arr[MAXN],n,q;

void buildTree(int nod,int start,int finish){
    if(start==finish){
        segment[nod]=arr[start];
        return;
    }

    int left = nod*2;
    int right = nod*2+1;
    int mid = (start+finish)/2;

    buildTree(left,start,mid);
    buildTree(right,mid+1,finish);

    segment[nod]=segment[left]+segment[right];
}

void update(int nod,int start,int finish,int pos,int value){
    if(start==finish){
        segment[nod]+=value;
        return;
    }

    int left = nod*2;
    int right = nod*2+1;
    int mid = (start+finish)/2;
    if(pos<=mid) update(left,start,mid,pos,value);
    else update(right,mid+1,finish,pos,value);

    segment[nod] = segment[left]+segment[right];
}

int query(int nod,int start,int finish,int i,int j){
    if(i>finish or j<start) return 0;
    if(i<=start and j>=finish) return segment[nod];

    int left = nod*2;
    int right = nod*2+1;
    int mid = (start+finish)/2;

    int l = query(left,start,mid,i,j);
    int r = query(right,mid+1,finish,i,j);

    return l+r;
}


int main(){
    int test,cs=1;
    scanf("%d",&test);
    while(test--){
        scanf("%d %d",&n,&q);
        for(int i=1;i<=n;i++) scanf("%d",&arr[i]);
        buildTree(1,1,n);
        printf("Case %d:\n",cs++);
        while(q--){
            int type;
            scanf("%d",&type);
            if(type==1){
                int idx;
                scanf("%d",&idx);
                idx++;
                update(1,1,n,idx,-arr[idx]);
                printf("%d\n",arr[idx]);
                arr[idx]=0;
            }
            else if(type==2){
                int idx,value;
                scanf("%d %d",&idx,&value);
                idx++;
                update(1,1,n,idx,value);
                arr[idx]+=value;
            }
            else {
                int i,j;
                scanf("%d %d",&i,&j);
                i++,j++;
                printf("%d\n",query(1,1,n,i,j));
            }
        }
    }
    return 0;
}
