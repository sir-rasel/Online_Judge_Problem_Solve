#include <bits/stdc++.h>
using namespace std;

int main(){
	int a,b=0,i;
	long long int c=1;
	cin>>a;
	int ara[a];
	for(i=0;i<a;i++){
		cin>>ara[i];
		if(ara[i]==0){
			b++;
			continue;
		}
		c=c*ara[i];
	}
	for(i=1;i<a;i++){
		if(b==1){
			if(ara[i-1]==0) cout<<c<<" ";
			else cout<<0<<" ";
		}
		else if(b>1) cout<<0<<" ";
		else cout<<c/ara[i-1]<<" ";
	}
	if(ara[a-1]==0 && b==1) cout<<c<<endl;
	else if(b>=1) cout<<0<<endl;
	else cout<<c/ara[a-1]<<endl;
	return 0;
}
