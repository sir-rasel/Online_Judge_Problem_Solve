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
        vector<pii>arr(n);
        vector<int>temp(n);
        set<int>s;
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i].first);
            arr[i].second = i;
            s.insert(arr[i].first);
            temp[i] = arr[i].first;
        }

        sort(arr.begin(),arr.end(), greater<pii>());
        if(s.size() == 1) printf("-1\n");
        else{
            int ans = -1, big = arr[0].first;
            for(int i=0;i<arr.size();i++){
                if(arr[i].first != big)
                    break;
                else {
                    int t = arr[i].second;
                    if(t>0 and temp[t-1]<arr[i].first){
                        ans = t+1;
                        break;
                    }
                    else if(t<(n-1) and temp[t+1]<arr[i].first){
                        ans = t+1;
                        break;
                    }
                }
            }
            printf("%d\n",ans);
        }
	}
	return 0;
}
