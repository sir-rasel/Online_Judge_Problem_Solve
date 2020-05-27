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
        for(int i=0;i<n;i++) scanf("%d",&a[i]);
        sort(a.begin(),a.end());
        int ans = 1;
        for(int i = n-1;i>=0;i--){
            if(i+1>=a[i]){
                ans += i+1;
                break;
            }
        }
        printf("%d\n",ans);
    }
	return 0;
}
