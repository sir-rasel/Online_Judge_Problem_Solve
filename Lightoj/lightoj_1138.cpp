#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long int ull;

ull trailingZero(ull n){
    ull counter=0;
    for(ull i=5;i<=n;i*=5) counter+=(n/i);
    return counter;
}

ull binarySearch(ull q){
    ull ans=0;
    ull low=1,high=1e18;
    while(low<=high){
        ull mid=(low+high)/2;
        ull temp = trailingZero(mid);
        if(temp==q) ans=mid;
        if(temp<q) low=mid+1;
        else high=mid-1;
    }
    return ans;
}

int main(){
    int test,cs=1;
    scanf("%d",&test);
    while(test--){
        ull q;
        scanf("%llu",&q);
        ull ans = binarySearch(q);
        if(ans>=5) printf("Case %d: %llu\n",cs++,ans);
        else printf("Case %d: impossible\n",cs++);
    }
    return 0;
}
