#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair <int, int> pii;
const int mod = 1e9+7;

int main(){
    int n;
    scanf("%d",&n);
    bool ok = false;
    while(n){
        if(n%10==7){
            ok = true;
            break;
        }
        n/=10;
    }
    if(ok) printf("Yes\n");
    else printf("No\n");
	return 0;
}
