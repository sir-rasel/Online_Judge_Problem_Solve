#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
   	scanf("%d",&n);
	long long int res = (n*(n+1)*(2*n+1))/6;
	printf("%lld\n",res);
    return 0;
}
