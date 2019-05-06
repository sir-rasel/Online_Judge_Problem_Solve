#include <bits/stdc++.h>
using namespace std;

int main() {
	int test;
	scanf("%d",&test);
	while(test--){
		int n;
		double sum=0.0;
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			double a;
			scanf("%lf",&a);
			sum+=(a/(double)n);
		}
		printf("%.14f\n",sum);
	}
	return 0;
}
