#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll a,b,c;
    scanf("%lld %lld %lld",&a,&b,&c);
    ll left = (4*a*b);
    ll right = (c-a-b)*(c-a-b);
    if(a+b>=c) right = 0;

    if(left<right) printf("Yes\n");
    else printf("No\n");
    return 0;
}
