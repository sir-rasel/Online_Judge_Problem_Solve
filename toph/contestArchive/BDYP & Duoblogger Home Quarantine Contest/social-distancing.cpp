#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long int ll;
typedef pair<int,int> pii;
const int mod = 1e9+7;
const int N = 1e6+10;

int aa[N+2],bb[N+2],bit[N+2];

void upd(int x){
    for( ; x>0; x-=x&-x)
        bit[x]++;
}
int get(int x){
    int ret=0;
    for( ; x<=N; x+=x&-x)
        ret+=bit[x];
    return ret;
}
int main(){
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>aa[i];

    for(int i=1; i<=n; i++){
        int x;
        cin>>x;
        bb[x]=i;
    }
    ll ans=0;
    for(int i=1; i<=n; i++){
        int id=bb[aa[i]];
        ans+=get(id);
        upd(id);
    }
    cout<<ans<<endl;
    return 0;
}
