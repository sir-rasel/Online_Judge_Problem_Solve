#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

int main(){
    int n,x;
    scanf("%d %d",&n,&x);
    vector<pii>a(n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i].first);
        a[i].second = i+1;
    }
    sort(a.begin(),a.end());

    pii ans;
    bool flag = false;
    for(int i=0;i<n and !flag;i++){
        int remain = x - a[i].first;
        auto it = lower_bound(a.begin()+i+1,a.end(),make_pair(remain,0));
        if(it != a.end() and it->first == remain){
            ans.first = a[i].second;
            ans.second = it->second;
            flag = true;
        }
    }
    if(flag) printf("%d %d\n",min(ans.first,ans.second),max(ans.first,ans.second));
    else printf("IMPOSSIBLE\n");

    return 0;
}
