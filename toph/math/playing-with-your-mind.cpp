#include<bits/stdc++.h>
using namespace std;

int main(){
	int test,cs=1;
	scanf("%d",&test);
    while(test--){
	   	long long int n;
       	scanf("%lld",&n);
		while(n%2==0) n=n>>1;
 		printf("Case %d: %lld\n",cs++,n);
   }
   return 0;
}
