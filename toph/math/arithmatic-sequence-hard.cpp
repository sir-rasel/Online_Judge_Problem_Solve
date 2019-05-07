#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long int ull;

int main(){
    ull n,k;
    scanf("%llu %llu",&n,&k);
    ull ans=(n*(n+1))/2,num;
    while(k--) scanf("%llu",&num),ans-=num;
    printf("%llu\n",ans);
    return 0;
}
