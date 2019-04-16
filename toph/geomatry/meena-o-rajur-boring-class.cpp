#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
const double pi=3.141593;

ll fib[50];
double ans[50];

void precal(){
    fib[0]=0,fib[1]=1;
    for(int i=2;i<=40;i++)
        fib[i]=fib[i-1]+fib[i-2];

    ans[0]=0.0;
    for(int i=1;i<=40;i++)
        ans[i]=ans[i-1]+( (fib[i]*fib[i])-((pi*fib[i]*fib[i])/4.0) );
}

int main(){
    precal();
    int test;
    scanf("%d",&test);
    while(test--){
        int n;
        scanf("%d",&n);
        printf("%.2f\n",ans[n]);
    }
    return 0;
}
