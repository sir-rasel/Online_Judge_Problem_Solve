#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool isPalin(string s, int a, int b){
	while(a<b){
		if(s[a++]!=s[b--])
            return false;
	}
	return true;
}

int main(){
    ll t;
    cin>>t;
    while(t--){
    	string s;
    	cin>>s;

    	ll a=0;
    	ll b=s.length()-1;

    	while(s[a]==s[b]){
    		a++;
    		b--;
    		if(a>=b) break;
    	}

    	a--;
    	b++;

    	if(a>=b){
    		cout<<s<<endl;
    		continue;
    	}

    	int c=b-1;
    	while(c>=a+1){
    		if(isPalin(s,a+1,c)) break;
    		c--;
    	}

    	int d=a+1;
    	while(d<=b-1){
    		if(isPalin(s,d,b-1)) break;
    		d++;
    	}

		for(int i=0;i<=a;i++) cout<<s[i];

    	if(c-a>b-d){
    		for(int i=a+1;i<=c;i++)
    			cout<<s[i];
    	}
    	else{
    		for(int i=d;i<=b-1;i++)
    			cout<<s[i];
    	}

		for(int i=b;i<s.length();i++) cout<<s[i];
		cout<<endl;
    }
}
