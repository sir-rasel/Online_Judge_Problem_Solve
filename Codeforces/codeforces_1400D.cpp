#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;


int main() {
    int test,cs=1;
    scanf("%d",&test);
    while(test--){
        int n;
        scanf("%d",&n);

        vector<int>a(n+1);
        vector<vector<int> > repeatation(n+1,vector<int>(n+1, 0));

        for(int i=1;i<=n;i++){
            scanf("%d",&a[i]);
            repeatation[a[i]][i] = 1;
        }

        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
                repeatation[i][j] += repeatation[i][j-1];

        ll ans = 0;
        for(int j = 1;j<=n;j++){
            for(int k = j+1;k<=n;k++){
                ll i = (repeatation[a[k]][j-1] - repeatation[a[k]][0]);
                ll l = (repeatation[a[j]][n] - repeatation[a[j]][k]);

                ans += (i * l);
            }
        }

        printf("%lld\n",ans);
    }

    return 0;
}
