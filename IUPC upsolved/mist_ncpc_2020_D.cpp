#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back

vector<int> g[100005];
vector<int> st;
int cnt[100005];

void dfs(int u,int par){
    cnt[u]=1;
    for(int v:g[u]){
        if(v==par) continue;
        dfs(v,u);
        cnt[u]+=cnt[v];
    }
    st.pb(u);
}

int main(){
    int t,n,x,y;
    scanf("%d",&t);
    for(int cs=1;cs<=t;cs++){
        scanf("%d",&n);
        for(int i=1;i<n;i++){
            scanf("%d %d",&x,&y);
            g[x].pb(y);
            g[y].pb(x);
        }
        for(int i=1;i<=n;i++){
            sort(g[i].begin(),g[i].end());
        }
        dfs(1,-1);
        int idx[n+4]={0},idx1[n+4]={0};
        for(int i=0;i<st.size();i++){
            idx[st[i]]=i+1;
            idx1[i+1]=st[i];
        }
        int q;
        scanf("%d",&q);
        int ans[n+3]={0};
        set<int> s;
        for(int i=1;i<=n;i++) s.insert(i);
        printf("Case %d:\n",cs);
        while(q--){
            int c;
            scanf("%d",&c);
            if(c==1){
                scanf("%d %d",&x,&y);
                int id=idx[x]-cnt[x]+1;
                if(s.size()){
                    auto lb=s.lower_bound(id);
                    int mxadd=min(idx[x]-(*lb)+1,y);
                    if(mxadd>0){
                        ll cnt1=0;
                        vector<int> temp;
                        for(auto it=lb;it!=s.end();it++){
                            int val=*it;
                            if(val>idx[x] || cnt1>=mxadd){
                                break;
                            }
                            cnt1++;
                            temp.pb(val);
                            ans[idx1[val]]=1;
                        }
                        for(int it:temp){
                            s.erase(it);
                        }
                    }
                }
            }
            else{
                scanf("%d",&x);
                printf("%d\n",ans[x]);
            }
        }
        for(int i=1;i<=n;i++){
            g[i].clear();
            cnt[i]=0;
        }
        st.clear();
    }
    return 0;
}
