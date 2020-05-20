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
	    int n;
	    cin>>n;

	    double ans;
        if(n%2==0) ans = 1.0 / tan(pi/(2*n));
        else ans = cos(pi/(4*n)) / sin(pi/(2*n));

        cout<<setprecision(10)<<fixed<<ans<<endl;
	}

	return 0;
}
