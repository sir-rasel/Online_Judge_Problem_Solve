#include<bits/stdc++.h>
#define MAXN 10000005
#define MAX 100005
using namespace std;

typedef long long int ll;

bool prime[MAXN];
int BIT[MAX],arr[MAX],n;

void seive(){
    prime[0]=true;
    prime[1]=true;
    for(int i=4;i<MAXN;i+=2) prime[i]=true;
    int srt = sqrt(MAXN);
    for(int i=3;i<=srt;i+=2){
        if(!prime[i]){
            for(int j=i*i;j<MAXN;j+=(2*i)){
                prime[j]=true;
            }
        }
    }
}

void update(int pos,int value){
    while(pos<=n){
        BIT[pos]+=value;
        pos+=(pos&-pos);
    }
}

ll query(int pos){
    ll sum=0;
    while(pos>0){
        sum+=BIT[pos];
        pos-=(pos&-pos);
    }
    return sum;
}

int main(){
    seive();
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&arr[i]);
        if(!prime[arr[i]]) {
            update(i,1);
            arr[i]=1;
        }
        else arr[i]=0;
    }
    int q;
    scanf("%d",&q);
    while(q--){
        int type;
        scanf("%d",&type);
        if(type==1){
            int u,v;
            scanf("%d %d",&u,&v);
            ll ans = query(v)-query(u)+arr[u];
            printf("%lld\n",ans);
        }
        else{
            int pos,a;
            scanf("%d %d",&pos,&a);
            if(!prime[a]){
                if(!arr[pos]){
                    update(pos,1);
                    arr[pos]=1;
                }
            }
            else{
                if(arr[pos]){
                    update(pos,-1);
                    arr[pos]=0;
                }
            }
        }
    }
    return 0;
}

/// segment sieve implementation
//#include<bits/stdc++.h>
//using namespace std;
//#define mx 100001
//#define S  10000000
//int arr[mx];
//int tree[mx*4];
//bool prime[S+107];
//void seive()
//{
//    int i,j;
//    prime[0]=prime[1]=true;
//    prime[2]=false;
//    for(i=4;i<=S;i+=2)
//        prime[i]=true;
//    for(i=3;i*i<=S;i+=2)
//        if(!(prime[i]))
//            for(j=i*i;j<=S;j+=2*i)
//                prime[j]=true;
//}
//void init(int node,int l,int r)
//{
//    if(l==r)
//    {
//        if(!(prime[arr[l]]))
//        tree[node]++;
//        return;
//    }
//    int left=node*2;
//    int right=(node*2)+1;
//    int mid=(l+r)/2;
//    init(left,l,mid);
//    init(right,mid+1,r);
//    tree[node]=tree[left]+tree[right];
//}
//int query(int node,int l,int r,int i,int j)
//{
//    if(i>r||j<l)
//        return 0;
//    if(l>=i&&r<=j)
//    {
//        return tree[node];
//    }
//    int left=2*node;
//    int right=2*node+1;
//    int mid=(l+r)/2;
//    int p1=query(left,l,mid,i,j);
//    int p2=query(right,mid+1,r,i,j);
//    return p1+p2;
//}
//void update(int node,int l,int r,int i,int x)
//{
//    if(i<l||i>r)
//        return;
//    if(l==r){
//        if(!(prime[arr[i]]))
//        {
//            if(!(prime[x]))
//            {
//               arr[i]=x;
//               return;
//            }
//            else
//            {
//                arr[i]=x;
//                tree[node]--;
//                return;
//            }
//        }else
//        {
//            if(!(prime[x]))
//            {
//                arr[i]=x;
//                tree[node]++;
//                return;
//            }
//            arr[i]=x;
//            return;
//        }
//    }
//    int left=2*node;
//    int right=2*node+1;
//    int mid=(l+r)/2;
//    update(left,l,mid,i,x);
//    update(right,mid+1,r,i,x);
//    tree[node]=tree[left]+tree[right];
//}
//int main()
//{
//    seive();
//    int n,q;
//    scanf("%d",&n);
//    for(int i=1;i<=n;i++)scanf("%d",&arr[i]);
//    init(1,1,n);
//    scanf("%d",&q);
//    for(int i=1;i<=q;i++)
//    {
//        int a,b,c;
//        scanf("%d%d%d",&a,&b,&c);
//        if(a==1)
//        {
//            printf("%d\n",query(1,1,n,b,c));
//        }else if(a==2)
//        {
//            update(1,1,n,b,c);
//        }
//    }
//    return 0;
//}
