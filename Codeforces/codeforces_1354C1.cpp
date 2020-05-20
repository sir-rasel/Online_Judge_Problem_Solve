#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

const int mod = 1e9+7;
const double pi = acos(-1);

int main() {
	int test;
	scanf("%d",&test);
	while (test--) {
        double n;
        cin>>n;

        n*=2;
        double radius =  (1.0/2.0)*(1.0/tan(pi/n));
        double ans = 2*radius;
        printf("%.10f\n",ans);
	}

	return 0;
}
