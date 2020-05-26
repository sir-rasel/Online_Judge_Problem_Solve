#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

int main(){
    int n,m,k;
    scanf("%d %d %d",&n,&m,&k);
    vector<int>a(n),b(m);
    for(auto &it:a) scanf("%d",&it);
    for(auto &it:b) scanf("%d",&it);
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    int ans = 0;
    auto it = b.begin();
    for(int i=0;i<n and it!=b.end();i++){
        auto t = lower_bound(it,b.end(),(a[i]-k));
        if(t==b.end()) it = t;
        else if(*t<=(a[i]+k)){
            ans++;
            it = t+1;
        }
    }
    printf("%d\n",ans);
    return 0;
}
