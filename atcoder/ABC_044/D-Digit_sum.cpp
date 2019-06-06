#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
const ll INF=10e11+1;

ll f(ll b,ll n){
    if(n<b)return n;
    return f(b,n/b)+n%b;
}

ll rmin(ll r,ll b){
    if(b>1){
        return min(r,b);
    }
    return r;
}

ll mainmain(ll n,ll s){
    if(n<s)return -1;
    ll res=INF;
    if(s==1) res=rmin(res,n);
    if(n==s) res=rmin(res,n+1);

    for(ll i=2; i*i<=n; i++){
        if(f(i,n)==s){
            res=rmin(res,i);
            break;
        }
    }

    for(ll p=1; p*p<=n; p++){
        ll b=(n-s)/p+1;
        if(b!=1 and f(b,n)==s){
            res=rmin(res,b);
        }
    }
    return res==INF?-1:res;
}

int main(){
    ll N,S;
    cin>>N>>S;
    cout<<mainmain(N,S)<<endl;
    return 0;
}
