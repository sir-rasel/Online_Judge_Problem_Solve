#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

int main(){
    ll n;
    scanf("%lld",&n);
    while(n){
        printf("%lld ",n);

        if(n==1) break;
        else if(n%2==0) n/=2;
        else n = (n*3)+1;
    }
    printf("\n");
    return 0;
}
