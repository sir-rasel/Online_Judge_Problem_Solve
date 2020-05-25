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
        int a,b;
        scanf("%d %d",&a,&b);
        int side;

        if(2*min(a,b)>=max(a,b)) side = 2*min(a,b);
        else if(2*min(a,b)<max(a,b)) side = max(a,b);
        else if((a+b)>=max(a,b)) side = a+b;

        int ans = side * side;
        printf("%d\n",ans);
    }
	return 0;
}
