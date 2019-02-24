#include <bits/stdc++.h>
using namespace std;

int fib[60];

void preCalculate(){
    fib[1]=1;
    fib[2]=1;
    for(int i=3;i<=50;i++) fib[i]=fib[i-1]+fib[i-2];
}

int main(){
    preCalculate();
    int n;
    scanf("%d",&n);
    printf("%d\n",fib[n]);
    return 0;
}
