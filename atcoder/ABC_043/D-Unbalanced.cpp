#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
	cin>>s;
	bool flag=false;
	for(int i=0;i<s.size()-1;i++){
		if(s[i]==s[i+1]){
			printf("%d %d\n",i+1,i+2);
			flag=1;
			break;
		}
		else if(i+2<s.size() and s[i]==s[i+2]){
			printf("%d %d\n",i+1,i+3);
			flag=1;
			break;
		}
	}
	if(!flag) printf("-1 -1\n");
	return 0;
}
