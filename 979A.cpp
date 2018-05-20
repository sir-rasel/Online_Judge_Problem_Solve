#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n;
    cin>>n;
    if(n==0) printf("0\n");
    else if((n+1)%2==0) printf("%lld\n",(n+1)/2);
    else printf("%lld\n",n+1);
    return 0;
}
