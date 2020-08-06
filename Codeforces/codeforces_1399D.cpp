#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

int main() {
    int test;
    scanf("%d",&test);
    while(test--){
        int n;
        string s;
        cin>>n>>s;

		vector<int>p[2],ans(n,0);
		int cnt=0;
		for(int i=0;i<n;i++){
			if(p['1'-s[i]].size()){
				ans[i]=p['1'-s[i]].back();
				p['1'-s[i]].pop_back();
			}
			else ans[i]=++cnt;
			p[s[i]-'0'].push_back(ans[i]);
		}
		cout<<cnt<<endl;
		for(int i=0;i<n;i++) cout<<ans[i]<<' ';
		cout<<endl;
    }

    return 0;
}
