#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

int main() {
    int test;
    scanf("%d",&test);
    while(test--){
        int n,k;
        scanf("%d %d",&n,&k);

        int mov = INT_MAX,ans = -1;
        for(int i=0;i<n;i++){
            int p;
            scanf("%d",&p);

            if(k%p==0 and (k/p)<mov){
                mov = min(mov,k/p);
                ans = p;
            }
        }

        printf("%d\n",ans);
    }

    return 0;
}
