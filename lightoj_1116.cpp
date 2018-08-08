#include <bits/stdc++.h>
using namespace std;

int main(){
    int test;
    scanf("%d",&test);
    for(int cs=1;cs<=test;cs++){
        long long int w;
        scanf("%lld",&w);
        if(w%2==1) printf("Case %d: Impossible\n",cs);
        else{
            long long int temp = w;
            while(temp%2==0){
                temp/=2;
            }
            long long int n = temp;
            long long int m = w/n;
            printf("Case %d: %lld %lld\n",cs,n,m);
        }
    }
    return 0;
}
