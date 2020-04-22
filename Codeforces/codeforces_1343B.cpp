#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main() {
    int test;
    scanf("%d",&test);
    while(test--){
        ll n;
        scanf("%lld",&n);
        ll a = n/2;
        if(a%2!=0)
            printf("NO\n");
        else{
            printf("YES\n");
            ll sum = 0;
            for(int i=2;i<=2*a;i+=2){
                printf("%d ",i);
                sum+=i;
            }
            for(int i=1,j=0;j<a;j++,i+=2){
                if(j+1==a) printf("%d\n",sum);
                else printf("%d ",i);
                sum-=i;
            }
        }
    }

    return 0;
}
