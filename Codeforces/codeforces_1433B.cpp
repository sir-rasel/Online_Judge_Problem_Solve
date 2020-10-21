#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;
const int maxn = 1e5;

int main() {
	int test;
	scanf("%d",&test);
	while(test--){
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++)
            scanf("%d",&arr[i]);

        bool flag = false;
        int ans = 0;
        vector<int>a;
        for(int i=0;i<n;i++)
            if(arr[i] == 1)
                a.push_back(i);

        for(int i=0;i<int(a.size()-1);i++)
            ans += (a[i+1]-a[i]-1);

        printf("%d\n",ans);
	}
	return 0;
}
