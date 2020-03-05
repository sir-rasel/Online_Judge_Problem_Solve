#include <bits/stdc++.h>
using namespace std;

const int MAXN=1000010;
int n,m,p,a[MAXN],b[MAXN];

int main () {
	scanf("%d%d%d",&n,&m,&p);
	int l=0,r=0;
	for (int i=0;i<=n-1;i++) {
		scanf("%d",&a[i]);
		if (l==i && a[i]%p==0) {l++;}
	}
	for (int i=0;i<=m-1;i++) {
		scanf("%d",&b[i]);
		if (r==i && b[i]%p==0) {r++;}
	}
	printf("%d\n",l+r);

	return 0;
}
