#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main() {
	int test;
	scanf("%d",&test);

	while (test--) {
		int n,k;
		scanf("%d %d",&n,&k);

		ll sum = 0;
        vector<int>a(n),b(n);
        for(int i=0;i<n;i++) {
            scanf("%d",&a[i]);
            sum+=a[i];
        }
        for(int i=0;i<n;i++) scanf("%d",&b[i]);
        sort(a.begin(),a.end());
        sort(b.begin(),b.end(),greater<int>());

        for(int i=0;i<k;i++){
            if(a[i]<b[i]){
                sum-=a[i];
                sum+=b[i];
            }
        }
        printf("%lld\n",sum);
	}
	return 0;
}
