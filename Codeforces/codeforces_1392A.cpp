#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
const ll mod = 1000000007;

int main() {
    int test,cs=1;
    scanf("%d",&test);
    while(test--){
        int n;
        scanf("%d",&n);
        set<int>s;
        for(int i=0;i<n;i++){
            int num;
            scanf("%d",&num);

            s.insert(num);
        }

        if(s.size() != 1 or n == 1) printf("1\n");
        else printf("%d\n",n);
    }
    return 0;
}
