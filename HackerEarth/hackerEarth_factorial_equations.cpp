#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

int factorialLastDigit[5] = {1, 1, 2, 6, 4};

int findLast(ll a,int b){
    int res = 1;
    for(int i=1;i<=b;i++){
        res = ((a%10)*(res))%10;
    }
    return res;
}

int main(){
    ll n,x;
    scanf("%lld %lld",&x,&n);

    int last;
    if(n>=5) last = 0;
    else last = factorialLastDigit[n];

    int res = findLast(x,last);

    printf("%d\n",res);
    return 0;
}
