#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

int main(){
    ll n,m;
    scanf("%lld %lld",&n,&m);
    if(n>=m){
        if(n%m==0) printf("0\n");
        else{
            ll minn = (n%m);
            minn = min(minn,abs(minn-m));
            printf("%lld\n",minn);
        }
    }
    else printf("%lld\n",min(m-n,n));
    return 0;
}
