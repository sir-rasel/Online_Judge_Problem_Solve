#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

int main(){
    int n;
    scanf("%d",&n);
    vector<int>a(n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    vector<int>ans(n,0);
    vector<pii>s;
    int pos=0;
    for(int i=0;i<n;i++){
        while(!s.empty()) {
            pos = s.back().first;
            if(s.back().second < a[i]) break;
            s.pop_back();
        }

        if(s.empty()) pos = 0;
        ans[i] = pos;
        s.push_back({i+1, a[i]});
    }

    for(int i=0;i<n;i++){
        if(i+1 == n) printf("%d\n",ans[i]);
        else printf("%d ",ans[i]);
    }
    return 0;
}
