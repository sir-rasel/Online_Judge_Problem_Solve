#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long int ll;
typedef pair<int,int> pii;
const int mod = 1e9+7;
const int N = 1e5+10;

int main(){
	int n;
	cin>>n;
	int a,m[n+1],x;
	vector <int> v;
	for(int i=1;i<=n;i++){
        cin>>a;
        m[a]=i;
	}
    for(int i=0;i<n;i++){
        cin>>a;
        x=m[a];
        vector<int>::iterator it=lower_bound(v.begin(),v.end(),x);
        if(it==v.end()) v.push_back(x);
        else v[it-v.begin()]=x;
    }
    cout<<v.size()<<endl;
	return 0;
}

