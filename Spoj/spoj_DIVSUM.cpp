#include <bits/stdc++.h>
using namespace std;

const int limit = 500005;
long long int sumOfproperDivisor[limit];

void preCalculate(){
    for(int i=2;i<limit;i++)
        for(int j=i+i;j<limit;j+=i)
            sumOfproperDivisor[j]+=i;
}

int main(){
    preCalculate();
    int test;
    scanf("%d",&test);
    while(test--){
        int n;
        scanf("%d",&n);
        if(n!=1) printf("%lld\n",sumOfproperDivisor[n]+1);
        else printf("%lld\n",sumOfproperDivisor[n]);
    }
    return 0;
}
