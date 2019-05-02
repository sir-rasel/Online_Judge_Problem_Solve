#include <bits/stdc++.h>
using namespace std;

int main(){
	int test,cs=1,c;
	scanf("%d",&test);
	while(test--){
		scanf("%d",&c);
		long long int x[c],y[c],m=0;
		for(int i=0;i<c;i++) scanf("%lld %lld",&x[i],&y[i]);
		for(int j=0;j<c-1;j++)
			for(int k=j+1;k<c;k++)
				m=max(m,(long long int)(x[k]-x[j])*(x[k]-x[j])+(y[k]-y[j])*(y[k]-y[j]));
		printf("Case %d: %lld\n",cs++,m);
	}
    return 0;
}
