#include <bits/stdc++.h>
using namespace std;

vector<string> vc;

string process(string str){
	string res = "";
	int ba=0;
	for(int i=0;i<str.size();i++)
		if(str[i]=='a') ba++;
	if(ba%2==1 && ba>1) ba--;
	else if(ba==1) ba++;
	res.push_back('b');
	while(ba--)
		res.push_back('a');
	return res;
}

int main(){
    int n,mx=-1;
    cin >> n;
    for(int i=0;i<n;i++){
    	string str;
    	cin >> str;
    	str = process(str);
    	vc.push_back(str);
    	mx = max(mx,(int)str.size());
    }
    for(auto it : vc){
    	int sz = it.size();

    	if(sz!=mx){
            sz = (mx-sz)/2;
            while(sz--) printf(" ");
        }
    	cout << it << endl;
    }
    return 0;
}

