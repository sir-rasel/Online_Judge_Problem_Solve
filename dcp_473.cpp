#define ONLINE_JUDGE 1
#include <bits/stdc++.h>
using namespace std;

int main() {
long long int test,i,t;
    scanf("%lld",&test);
    while(test--){
        scanf("%lld",&t);
        i=sqrt(t)+1;
        i=i*i;
        printf("%lld\n",i);
    }
	return 0;
}