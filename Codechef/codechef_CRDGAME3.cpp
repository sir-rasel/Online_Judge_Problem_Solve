#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

int main() {
    int test;
    scanf("%d",&test);
    while(test--){
        int c,r;
        scanf("%d %d",&c,&r);

        int cS = ceil(c/9.0);
        int rS = ceil(r/9.0);

        printf("%d %d\n",!(cS<rS),min(cS,rS));
    }

    return 0;
}
