#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

//ll n,m,cost;
//const ll maxx = 1000000;
//
//struct network{
//    ll u,v,bandwidth,cost;
//    network(){}
//    network(ll a, ll b,ll band,ll c) {
//        u=a;
//        v=b;
//        bandwidth=band;
//        cost=c;
//    }
//    bool operator < (const network &p) const{
//        if (bandwidth == p.bandwidth) return cost < p.cost;
//        return bandwidth < p.bandwidth;
//    }
//};
//
//bool check (vector<network> &poll,ll band){
//    ll totalCost=0;
//    bool detect[n]={false};
//
//    for(ll i=0;i<m;i++){
//        if(poll[i].bandwidth<band) continue;
//        if(!detect[poll[i].u] or !detect[poll[i].v]){
//            totalCost+=poll[i].cost;
//            detect[poll[i].u]=true;
//            detect[poll[i].v]=true;
//        }
//        if(totalCost>cost) return false;
//    }
//    for(ll i=0;i<n;i++)
//        if(!detect[i]) return false;
//    return true;
//}
//
//ll bs (vector<network> &poll,ll maxx){
//    ll low=0,high=maxx,ans=0;
//    while(low<=high){
//        ll mid=(low+high) >> 1;
//        if(check(poll,mid)) {
//            low=mid+1;
//            ans=mid;
//        }
//        else high=mid-1;
//    }
//    if(ans!=0) return ans;
//    else return -1;
//}
//
//int main(){
//    ll test,cs=1;
//    scanf("%lld",&test);
//    while(test--){
//        scanf("%lld %lld %lld",&n,&m,&cost);
//        vector<network> poll(m);
//
//        for(ll i=0;i<m;i++)
//            scanf("%lld %lld %lld %lld",&poll[i].u,&poll[i].v,&poll[i].bandwidth,&poll[i].cost);
//        sort(poll.begin(),poll.end());
//
//        ll res = bs(poll,maxx);
//        printf("Case %lld: ",cs++);
//        if(res!=-1) printf("%lld kbps\n",res);
//        else printf("impossible\n");
//    }
//    return 0;
//}

const int INF = 0x3f3f3f3f;
const int maxn = 1005;
const int MAXN = 100;
const int MAXM = 50010;
const int N = 1005;

struct Edge{
    int u,v,b,cost;
}edge[MAXM],e[MAXM];

int pre[MAXN],id[MAXN],visit[MAXN],in[MAXN];
int n,m,C,num;

void addedge(int u,int v,int w){
    edge[num].u=u;
    edge[num].v=v;
    edge[num++].cost=w;
}

int zhuliu(int root, int n, int m, Edge edge[]){
    int res = 0, u, v;
    while (1){
        for (int i = 0; i < n; i++)
            in[i] = INF;
        for (int i = 0; i < m; i++)
            if (edge[i].u != edge[i].v && edge[i].cost < in[edge[i].v]){
                pre[edge[i].v] = edge[i].u;
                in[edge[i].v] = edge[i].cost;
            }
        for (int i = 0; i < n; i++)
            if (i != root && in[i] == INF)
                return -1;
        int tn = 0;
        memset(id, -1, sizeof(id));
        memset(visit, -1, sizeof(visit));
        in[root] = 0;
        for (int i = 0; i < n; i++){
            res += in[i];
            v = i;
            while (visit[v] != i && id[v] == -1 && v != root){
                visit[v] = i;
                v = pre[v];
            }
            if (v != root && id[v] == -1){
                for (int u = pre[v]; u != v; u = pre[u])
                    id[u] = tn;
                id[v] = tn++;
            }
        }
        if (tn == 0) break;
        for (int i = 0; i < n; i++)
            if (id[i] == -1)
                id[i] = tn++;
        for (int i = 0; i < m;){
            v = edge[i].v;
            edge[i].u = id[edge[i].u];
            edge[i].v = id[edge[i].v];
            if (edge[i].u != edge[i].v)
                edge[i++].cost -= in[v];
            else
                swap(edge[i], edge[--m]);
        }
        n = tn;
        root = id[root];
    }
    return res;
}

void Build(int mid){
    num=0;
    for (int i=0;i<m;i++)
        if (e[i].b>=mid)
            addedge(e[i].u,e[i].v,e[i].cost);
}

bool isok(int mid){
    Build(mid);
    int ans=zhuliu(0,n,num,edge);
    if (ans==-1) return false;
    if (ans<=C) return true;
    return false;
}

void solve(int x){
    int l=0,r=x,ans=-1;
    while (l<=r){
        int mid=(l+r)>>1;
        if (!isok(mid))
            r=mid-1;
        else{
            l=mid+1;
            ans=mid;
        }
    }
    if (ans==-1) printf("impossible\n");
    else printf("%d kbps\n",ans);
}

int main(){
    int t,i,j,u,v,b,w,cas=0;
    scanf("%d",&t);
    while (t--){
        scanf("%d%d%d",&n,&m,&C);
        int Max=0;
        for (i=0;i<m;i++){
            scanf("%d%d%d%d",&e[i].u,&e[i].v,&e[i].b,&e[i].cost);
            Max=max(Max,e[i].b);
        }
        printf("Case %d: ",++cas);
        solve(Max);
    }
    return 0;
}
