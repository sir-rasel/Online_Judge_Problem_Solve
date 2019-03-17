#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    int t;
    scanf("%d",&t);
    getchar();
    while(t--){
    	string s;
    	ll n,i,q;
    	cin>>s>>n;
    	q=s.size();
    	vector<pair<ll,ll> >v;
    	for(i=0;i<s.size();i++) v.push_back({s[i]-48,i});
    	sort(v.begin(),v.end());
    	ll pos=-1;
    	for(i=0;i<v.size();i++)
    		if(q>0 and v[i].first<=n and v[i].second>pos){
    			printf("%lld",v[i].first);
    			pos=v[i].second;
    			q--;
    		}
    	while(q>0){
    		printf("%lld",n);
    		q--;
    	}
    	printf("\n");
    }
    return 0;
}
