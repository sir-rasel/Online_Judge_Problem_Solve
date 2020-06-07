#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    vector<int>a(n),b(n),c(n);
    for(auto &it:a) scanf("%d",&it);
    for(auto &it:b) scanf("%d",&it);
    for(auto &it:c) scanf("%d",&it);

    vector<int>ans(n);
    set<int>trace;

    ans[0]=a[0];
    trace.insert(a[0]+b[0]);
    k--;

    for(int i=1; i<n; i++)
    {
        auto it = trace.begin();
        if(*it<=a[i])
        {
            ans[i]=a[i];
            trace.insert(a[i]+b[i]);
            trace.erase(it);
        }
        else if(k>0)
        {
            ans[i]=a[i];
            trace.insert(a[i]+b[i]);
            k--;
        }
        else
        {
            ans[i]=*it;
            trace.insert(*it+b[i]);
            trace.erase(it);
        }
    }
    for(int i=0; i<n; i++)
    {
        if(i+1==n) printf("%d\n",ans[i]);
        else printf("%d ",ans[i]);
    }
    return 0;
}
