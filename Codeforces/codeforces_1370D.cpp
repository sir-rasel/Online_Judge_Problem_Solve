#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
const int N = 2e5 + 5;

int n, k;
int a[N];

bool check(int x, int cur){
	int ans = 0;
	for(int i = 1; i <= n; i++){
		if(!cur){
			ans++;
			cur ^= 1;
		}
		else{
			if(a[i] <= x){
				ans++;
				cur ^= 1;
			}
		}
	}
	return ans >= k;
}

int binsearch(int lo, int hi){
	while(lo < hi){
		int mid = (lo + hi) / 2;
		if(check(mid, 0) || check(mid, 1))
			hi = mid;
		else
			lo = mid + 1;
	}
	return lo;
}

int main(){
	scanf("%d %d",&n,&k);
	for(int i = 1; i <= n; i++) scanf("%d",&a[i]);
	int ans = binsearch(1, 1e9);
	printf("%d\n",ans);
	return 0;
}
