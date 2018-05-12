#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	char a='\\';
	char b='/';
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string win;
		int goal=0;
		while(n--){
			string s;
			cin>>s;
			int y;
			cin>>y;
			if(y>goal){
				goal=y;
				win=s;
			}
		}
		cout<<"Winner: "<<a<<win<<b<<endl;;
	}
	return 0;
}
