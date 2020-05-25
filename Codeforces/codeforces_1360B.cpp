#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

const int mod = 1e9+7;
const double pi = acos(-1);
const int Max = 1e6+10;

int main() {
    int test;
    scanf("%d",&test);
    while(test--){
        int n;
        scanf("%d",&n);
        vector<int>a(n);
        for(auto &it:a)
            scanf("%d",&it);
        sort(a.begin(),a.end());

        int ans = INT_MAX;
        for(int i=1;i<n;i++)
            ans = min(ans,abs(a[i]-a[i-1]));
        printf("%d\n",ans);
    }
	return 0;
}
