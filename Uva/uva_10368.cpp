#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

bool optimalPlay(ll a,ll b){
    if (a < b) swap(a, b);
	if (b == 0) return false;
	if (a % b == 0) return true;
	ll minusValue = (a / b) * b;
	bool flag = optimalPlay(a-minusValue,b);
	if (!flag) return true;
	if (a-minusValue+b<a) return true;
	return false;
}

int main(){
    ll a,b;
    while(scanf("%lld %lld",&a,&b)){
        if(a==0 and b==0) break;

        bool res = optimalPlay(a,b);
        if(res) printf("Stan wins\n");
        else printf("Ollie wins\n");
    }
    return 0;
}
