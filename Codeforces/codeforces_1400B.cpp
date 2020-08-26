#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;


int main() {
    int test,cs=1;
    scanf("%d",&test);
    while(test--){
        ll my,follwer,sword,axes, swordPrice, axesPrice;
        scanf("%lld %lld %lld %lld %lld %lld", &my, &follwer, &sword, &axes, &swordPrice, &axesPrice);

        if(swordPrice > axesPrice){
            swap(sword, axes);
            swap(swordPrice, axesPrice);
        }

        if(my < follwer) swap(my, follwer);

        ll ans = 0;
        for(int i=0; i<=sword and i*swordPrice <= my; i++){
            ll myTemp = my - (i*swordPrice), follwerTemp = follwer;
            ll remainSword = sword-i, remainAxes = axes;

            ll count = i;
            ll axesTake = min(remainAxes, myTemp/axesPrice);
            count += axesTake;
            remainAxes -= axesTake;

            ll swordTake = min(remainSword, follwerTemp/swordPrice);
            count += swordTake;
            follwerTemp -= (swordTake * swordPrice);
            axesTake = min(remainAxes, follwerTemp/axesPrice);
            count += axesTake;

            ans = max(ans, count);
        }
        printf("%lld\n",ans);
    }

    return 0;
}
