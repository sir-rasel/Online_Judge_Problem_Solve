#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
		ll n;
        scanf("%lld", &n);
        printf("%lld\n", 2*n*n-n+1);
    }
	return 0;
}
