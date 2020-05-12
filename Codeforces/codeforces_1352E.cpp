#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main() {
	int test;
	scanf("%d",&test);
	while (test--) {
		int n;
		scanf("%d",&n);
		vector<int> a(n+5);
		vector<int>check(n+5,0),counter(n+5,0);

		for (int i=0;i<n;i++) {
            scanf("%d",&a[i]);
            counter[a[i]]++;
        }

        int ans=0;
        for(int i=0;i<n;i++){
            int sum=a[i];
            for(int j=i+1;j<n;j++){
                sum+=a[j];

                if(sum>n) break;

                if(check[sum]==0){
                    check[sum]++;
                    ans+=counter[sum];
                }
            }
        }
        printf("%d\n",ans);
	}
	return 0;
}
