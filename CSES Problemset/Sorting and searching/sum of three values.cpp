#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

int main(){
    int n,x;
    scanf("%d %d",&n,&x);
    vector<pii>a(n);
    for (int i=0;i<n;i++){
        scanf("%d",&a[i].first);
        a[i].second = i+1;
    }
    sort(a.begin(),a.end());

    vector<int>ans;
    bool flag = false;
    for(int i=0;i<n and !flag;i++){
        int rem = x - a[i].first;
        for(int j=i+1;j<n and !flag;j++){
            if (rem < a[j].first) break;

            auto it = lower_bound(a.begin()+j+1,a.end(),make_pair(rem-a[j].first,0));
            if(it == a.end() or it->first != (rem-a[j].first) ) continue;
            else{
                int t = it - a.begin();
                ans.push_back(a[i].second);
                ans.push_back(a[j].second);
                ans.push_back(a[t].second);
                flag = true;
            }
        }
    }

    sort(ans.begin(),ans.end());
    if(flag) printf("%d %d %d\n",ans[0],ans[1],ans[2]);
    else printf("IMPOSSIBLE\n");

    return 0;
}
