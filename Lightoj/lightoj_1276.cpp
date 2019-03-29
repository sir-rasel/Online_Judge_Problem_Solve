#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

vector<ll>v;
int cnt=0;
void func(ll n){
    if(n>1000000000000ULL) return;
    if(n!=0) v.push_back(n);
    func(n*10+4);
    func(n*10+7);
}

int id;
ll maxx=1000000000000;
vector<ll>lucky;

void gen_num(int idx,ll num){
    if(idx>=v.size()) return ;
    for(int i=idx; i<v.size(); i++){
        ll temp=num*v[i];
        if(temp<=0 || temp>=maxx) return;
        lucky.push_back(temp);
        gen_num(i,temp);
    }
}

int main(){
    func(0);
    sort(v.begin(),v.end());
    gen_num(0,1);

    set<ll> st(lucky.begin(),lucky.end());
    lucky.assign(st.begin(),st.end());

    int test,cs=1;
    scanf("%d",&test);

    while(test--){
        ll a,b;
        scanf("%lld %lld",&a,&b);
        ll r=upper_bound(lucky.begin(),lucky.end(),b)-lucky.begin();
        ll l=lower_bound(lucky.begin(),lucky.end(),a)-lucky.begin();
        int ans=(r-l);
        printf("Case %d: %d\n",cs++,ans);
    }
    return 0;
}
