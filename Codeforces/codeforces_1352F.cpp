#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main() {
	int test;
	scanf("%d",&test);
	while (test--) {
		int a,b,c;
		scanf("%d %d %d",&a,&b,&c);

		string s="";
		if(c) c++;
		for(int i=0;i<c;i++) s+='1';

        if(a) a++;
        for(int i=0;i<a;i++) s+='0';

        if(a==0 and c==0) b++;
        else if(a and c) b--;


        bool flag = false;
        if(s.size() and s[s.size()-1]=='0') flag = true;

        for(int i=0;i<b;i++){
            s+=('0'+flag);
            flag = !flag;
        }

        cout<<s<<endl;
	}
	return 0;
}
