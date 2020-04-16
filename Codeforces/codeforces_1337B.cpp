#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;
const int mod = 1e9+7;

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        int x,n,m;
        scanf("%d %d %d",&x,&n,&m);

        while(x>0 and n>0){
            if(x>=20) {
                x = (x/2)+10;
                n--;
            }
            else break;
        }
        while(x>0 and m>0){
            x-=10;
            m--;
        }
        if(x<=0) printf("YES\n");
        else printf("NO\n");
    }

	return 0;
}
