#include<bits/stdc++.h>
using namespace std;

const int N = 2e5;

int n;
string st;
int goldenDitection[N];
int cnt;
int ans;
int LeftCount[N],RightCount[N];

int main(){
	cin>>n>>st;
	for (int i=1;i<=n;i++){
		goldenDitection[i]=(st[i-1]=='G');
		cnt+=goldenDitection[i];
	}

	for (int i=1;i<=n;i++){
		LeftCount[i]=LeftCount[i-1]+1;
		if (goldenDitection[i]==0) LeftCount[i]=0;
	}

	for (int i=n;i>=1;--i){
		RightCount[i]=RightCount[i+1]+1;
		if (goldenDitection[i]==0) RightCount[i]=0;
	}

	for (int i=1;i<=n;i++){
		ans=max(ans,LeftCount[i]);
		ans=max(ans,LeftCount[i-1]+RightCount[i+1]+1);
	}

	ans=min(ans,cnt);
	cout<<ans<<endl;
	return 0;
}
