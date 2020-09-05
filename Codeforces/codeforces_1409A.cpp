#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;


int main() {
    int test;
    scanf("%d",&test);
    while(test--){
        int a,b;
        scanf("%d %d",&a,&b);

        int d = abs(a-b);
        int ans = ceil(d/10.0);
        printf("%d\n",ans);
    }

    return 0;
}
