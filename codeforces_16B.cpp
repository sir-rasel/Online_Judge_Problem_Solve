#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll n,m;
    scanf("%lld %lld",&n,&m);
    pair<ll,ll>matchBox[m+5];
    for(int i=0;i<m;i++) scanf("%lld %lld",&matchBox[i].second,&matchBox[i].first);
    sort(matchBox,matchBox+m);
    ll sum=0;
    for(int i=m-1;i>=0 and n>0;i--){
        int temp = min(n,matchBox[i].second);
        sum+=temp*matchBox[i].first;
        n-=temp;
    }
    cout<<sum<<endl;
    return 0;
}
