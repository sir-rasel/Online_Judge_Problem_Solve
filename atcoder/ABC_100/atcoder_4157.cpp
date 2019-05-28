#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

vector<ll>x,y,z;
ll sign[2]={1,-1};

ll absSum(int pos,int i,int j,int k){
    return (x[pos]*sign[i]+y[pos]*sign[j]+z[pos]*sign[k]);
}

int main(){
    int n, m;
    scanf("%d %d",&n,&m);
    for (int i = 0; i < n; i++){
        ll a,b,c;
        scanf("%lld %lld %lld",&a,&b,&c);
        x.push_back(a);
        y.push_back(b);
        z.push_back(c);
    }

    ll res = 0;

    for (ll i=0;i<2;i++){
        for (ll j=0;j<2;j++){
            for (ll k=0;k<2;k++){
                vector<ll>temp;
                for (int l=0;l<n;l++) temp.push_back(absSum(l,i,j,k));
                sort(temp.begin(),temp.end());
                ll maxx = 0;
                for (int l = n-1,o=0; l >=0 and o<m; l--,o++) maxx += temp[l];
                res = max(res,maxx);
            }
        }
    }
    printf("%lld\n",res);
    return 0;
}
