#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll a,b;
    while(scanf("%lld %lld",&a,&b)==2){
        if(a>b) swap(a,b);
        a--;
        printf("Sum of %lld to %lld is -> %lld;\n",a+1,b,((b*(b+1))/2)-((a*(a+1))/2));
    }
    return 0;
}
