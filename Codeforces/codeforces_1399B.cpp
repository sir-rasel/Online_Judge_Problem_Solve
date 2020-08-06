#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

int main() {
    int test;
    scanf("%d",&test);
    while(test--){
        int n;
        scanf("%d",&n);

        vector<pii>a(n);
        int ah=INT_MAX,bh=INT_MAX;
        for(int i=0;i<n;i++){
            scanf("%d",&a[i].first);
            ah = min(ah,a[i].first);
        }
        for(int i=0;i<n;i++){
            scanf("%d",&a[i].second);
            bh = min(bh,a[i].second);
        }

        ll turn = 0;
        for(int i=0;i<n;i++){
            if(a[i].first == ah and a[i].second == bh)
                continue;
            else{
                int common = min((a[i].first - ah),(a[i].second-bh));
                turn += common;
                turn += (a[i].first-ah)-common;
                turn += (a[i].second-bh)-common;
            }
        }
        printf("%lld\n",turn);
    }

    return 0;
}
