#include <bits/stdc++.h>
using namespace std;

double preArray[1000005];

void precalculation(){
    for(int i=1;i<=1000005;i++) preArray[i]=preArray[i-1]+log(i);
}

int main(){
    precalculation();
    int test;
    scanf("%d",&test);
    for(int i=1;i<=test;i++){
        int n,base,ans;
        scanf("%d %d",&n,&base);
        if(n==0 or n==1) ans = 1;
        else if(n==2){
            int x = 4,digit=0;
            while(x){
                x/=base;
                digit++;
            }
            ans = digit;
        }
        else ans = ceil(preArray[n]/log(base));
        printf("Case %d: %d\n",i,ans);
    }
    return 0;
}
