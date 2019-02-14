#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int a,b,i;
    scanf("%lld %lld",&a,&b);
    for(i=0;a<=b;i++){
        a*=3;
        b*=2;
    }
    printf("%lld\n",i);
    return 0;
}
