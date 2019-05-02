#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    int test,cs=1;
    scanf("%d",&test);
    while(test--){
        ll bill,sum=0,budget;
        for(int i=0;i<13;i++){
            scanf("%lld",&bill);
            if(i==6) budget=bill;
            if(i!=6) sum+=bill;
        }
        sum-=budget;
        if(sum<0) budget = 0;
        else budget = sum;
        printf("Case %d: %lld\n",cs++,budget);
    }
    return 0;
}
