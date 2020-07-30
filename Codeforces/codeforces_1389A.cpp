#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

const int mod = 1e9+7;
const int N = 1e8;

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        ll l,r;
        scanf("%lld %lld",&l,&r);

        if(2*l<=r)
            printf("%lld %lld\n",l,2*l);
        else
            printf("-1 -1\n");
    }
    return 0;
}
