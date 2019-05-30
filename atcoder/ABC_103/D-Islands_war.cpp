#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    vector<pair<int,int> >v(m);
    for(int i=0;i<m;i++) scanf("%d %d",&v[i].second,&v[i].first);
    sort(v.begin(),v.end());
    int ans=0,prev=-1;
    for(int i=0;i<m;i++){
        if(v[i].second>prev){
            ans++;
            prev=v[i].first-1;
        }
    }
    printf("%d\n",ans);
    return 0;
}
