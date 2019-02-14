#include <bits/stdc++.h>
using namespace std;

int main(){
    unsigned int n,a,b,i;
    while(scanf("%d",&n) and n){
        a=0,b=0,i=0;
        bool aflag = true;
        while(n){
            if(n&1){
                if(aflag)   a|=(1<<i);
                else b|=(1<<i);
                aflag = !aflag;
            }
            i++;
            n/=2;
        }
        printf("%d %d\n",a,b);
    }
    return 0;
}
