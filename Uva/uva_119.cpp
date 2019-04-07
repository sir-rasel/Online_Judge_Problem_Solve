#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll n,i=0;
    while(scanf("%lld",&n)!=EOF){
        getchar();
        map<string,ll>summary;
        vector<string>group;
        for(ll i=0;i<n;i++){
            string name;
            cin>>name;
            summary[name]=0;
            group.push_back(name);
        }
        for(ll i=0;i<n;i++){
            string name;
            ll money,person;
            cin>>name>>money>>person;
            ll temp=0;
            if(person!=0) temp=money/person;
            summary[name]-=(temp*person);
            getchar();
            for(ll j=0;j<person;j++){
                string name;
                cin>>name;
                summary[name]+=temp;
            }
        }
        if(i!=0) printf("\n");
        for(auto x:group) cout<<x<<" "<<summary[x]<<endl;
        i++;
    }
    return 0;
}
