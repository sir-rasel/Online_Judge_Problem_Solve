#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll n;
    while(scanf("%lld",&n) and n!=0){
        map<string,ll>summary;
        for(ll i=0;i<n;i++){
            string name;
            cin>>name;
            summary[name]=0;
        }
        for(ll i=0;i<n;i++){
            string name;
            ll money,person;
            cin>>name>>money>>person;
            ll temp=money/person;
            summary[name]-=(temp*person);
            getchar();
            for(ll j=0;j<person;j++){
                string name;
                cin>>name;
                summary[name]+=temp;
            }
        }
        for(auto x:summary) cout<<x.first<<" "<<x.second<<endl;
    }
    return 0;
}
