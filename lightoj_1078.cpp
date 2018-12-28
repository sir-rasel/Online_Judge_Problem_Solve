#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long int ull;

int main(){
    int test,cs=1;
    scanf("%d",&test);
    while(test--){
        int n,m;
        scanf("%d %d",&n,&m);
        ull desiredNumber=0;
        int digit=0;
        do{
            desiredNumber = (desiredNumber*10+m)%n;
            digit++;
        }while(desiredNumber);
        printf("Case %d: %d\n",cs++,digit);
    }
    return 0;
}
