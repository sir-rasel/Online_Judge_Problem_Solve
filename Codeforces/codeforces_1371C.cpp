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
        ll a,b,n,m;
        scanf("%lld %lld %lld %lld",&a,&b,&n,&m);
        if(m<=min(a,b) and m+n<=a+b) puts("YES");
        else puts("NO");
    }

    return 0;
}
