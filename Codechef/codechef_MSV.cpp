#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
const ll M=1e6+6;
ll LAST[M];
ll A[M];
vector<ll>ad[M];

int main(){
	int test;
	scanf("%d",&test);
	while(test--){
		ll mx=0,answer=0;
		int n;
		scanf("%d",&n);
		vector<ll>V;
		set<ll>U;

		for(int i=1;i<=n;i++){
			scanf("%lld",&A[i]);
			LAST[A[i]]=i;
			U.insert(A[i]);
			mx=max(mx,A[i]);
			ad[A[i]].push_back(i);
		}

		for(set<ll>::iterator it=U.begin();it!=U.end();it++)
            V.push_back(*it);
		for(int i=0;i<V.size();i++){
			ll count_multiples=0;
			for(int j=V[i];j<=mx;j+=V[i])
				count_multiples+=(lower_bound(ad[j].begin(),ad[j].end(),LAST[V[i]])-ad[j].begin());
			answer=max(answer,count_multiples);
		}
		printf("%lld\n",answer);
		for(int i=1;i<=n;i++)
			ad[A[i]].clear();
	}
	return 0;
}
