#include <bits/stdc++.h>
using namespace std;

int a[1001];

int main(){
	int test,p,q,n;
	scanf("%d",&test);
	while(test--){
        scanf("%d %d",&n,&a[1]);
		q=a[1];
		for(int i=2;i<=n;i++) cin>>p,a[i]=p-q,q=p;
		int last=0,ans=0,mx=a[n],mn=a[n];
		bool eql=(n==1?1:a[n]==0);
		for(int i=2;i<n;i++){
			eql&=(0==a[i]);
			mn=min(mn,a[i]);
			mx=max(mx,a[i]);
			if(a[i]>0 && a[i+1]<0){
				if(last) ans=max(ans,i-last-1);
				last=i;
			}
		}
		if(eql) cout<<"neutral\n";
		else if(mn >= 0) cout<<"allGoodDays\n";
		else if(mx <= 0) cout<<"allBadDays\n";
		else if(ans) cout<<ans<<"\n";
		else cout<<"none\n";
	}
    return 0;
}
