#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

const int mod = 1e9+7;
const int Max = 1e8;
const double eps = 1e-4;

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        int n;
        scanf("%d",&n);
        vector<int>a(n);
        for(int i=0;i<n;i++) scanf("%d",&a[i]);

        ll ans = 0;

        for(int i=1;i<n;i++){
            if(a[i-1]<=a[i]){
                ans+=abs(a[i]-a[i-1]-1);
            }
            else{
                ans+=abs(a[i-1]-a[i]-1);
            }
        }
        printf("%lld\n",ans);
    }
    return 0;
}
