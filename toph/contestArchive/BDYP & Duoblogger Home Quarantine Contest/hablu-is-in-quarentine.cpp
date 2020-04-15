#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;
const int mod = 1e9+7;

int main(){
    int n;
    scanf("%d",&n);
    string s[n];
    for(int i=0;i<n;i++) cin>>s[i];
    int x;
    scanf("%d",&x);

    bool flag = false;
    vector<int>a(x),ans;
    for(int i=0;i<x;i++) {
        scanf("%d",&a[i]);
        int t = a[i]/n;
        int j = a[i]%n;
        if(j==0) t--,j=n;
        if(flag and s[t][j-1]!='c') ans.push_back(a[i]);
        if(s[t][j-1]=='c') flag = true;
    }
    if(flag){
        printf("YES\n");
        for(int i=0;i<ans.size();i++){
            if(i+1==ans.size()) printf("%d\n",ans[i]);
            else printf("%d ",ans[i]);
        }
    }
    else printf("NO\n");

	return 0;
}
