#include <bits/stdc++.h>
using namespace std;

int main(){
	int test,cs=1;
	scanf("%d",&test);getchar();
	while(test--){
		string s;
		cin >> s;
		char p = '1';
		for(int j = 0; j < s.length(); j++){
			if(tolower(p) == tolower(s[j])) cout << "#";
			else cout << s[j] , p = s[j];
		}
		cout << endl;
	}
	return 0;
}
