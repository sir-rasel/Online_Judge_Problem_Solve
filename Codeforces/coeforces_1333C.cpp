#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
	int n,x,z=0;
	ll ans=0,y=0;
	scanf("%d",&n);

	map<ll,int>last;
	last[0]=0;
	for (int i=1;i<=n;i++){
		scanf("%d",&x);
		y+=x;
		if (last.count(y))
            if (last[y]+1>z)
                z=last[y]+1;
		last[y]=i;
		ans+=i-z;
	}
	printf("%lld",ans);
	return 0;
}
