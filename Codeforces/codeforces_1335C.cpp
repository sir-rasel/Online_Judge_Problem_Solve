#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;
const int mod = 1e9+7;

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        int n;
        scanf("%d",&n);
        map<int,int>arr;
        int maxx = 0;
        for(int i=0;i<n;i++) {
            int a;
            scanf("%d",&a);
            arr[a]++;
        }
        int ans = 0,s = arr.size();
        for(auto it:arr){
            int temp = it.second;
            if(temp<s) ans = max(ans,temp);
            else if(temp==s) ans = max(ans,temp-1);
            else if(temp>s) ans = max(ans,s);
        }

        printf("%d\n",ans);
    }
	return 0;
}
