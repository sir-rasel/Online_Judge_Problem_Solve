#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

void check(ll x){
    ll j=0;
    ll i= sqrt(x);
    while(i>0){
        if(j>i){
            printf("No\n");
            return;
        }
        else if(i*i + j*j == x){
            printf("Yes\n");
            return;
        }
        else if(i*i + j*j <x) j++;
        else i--;
    }
}

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        ll num;
        scanf("%lld",&num);
        check(num);
    }
    return 0;
}
