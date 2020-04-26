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
        string s;
        cin>>n>>s;

        vector<int>a(s.size()+1),b(s.size()+1);
        for(int i=1;i<=s.size();i++){
            a[i] = a[i-1]+(s[i-1]=='A');
            b[i] = b[i-1]+(s[i-1]=='B');
        }

        int ans = INT_MAX;
        for(int i=0;i<=s.size();i++){
            int temp = a[s.size()]-a[i]+b[i];
            ans = min(ans,temp);
        }

        printf("%d\n",ans);
    }

	return 0;
}
