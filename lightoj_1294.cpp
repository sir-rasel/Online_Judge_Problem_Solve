#include <bits/stdc++.h>
using namespace std;

int main(){
    int test;
    scanf("%d",&test);
    for(int i=1;i<=test;i++){
        long long int  n,m;
        scanf("%lld %lld",&n,&m);
        ///this is brute force method
//        long long int sum=0;
//        for(long long int j=1;j<n;j+=2*m){
//            sum-= m*j + (m-1)*m/2.0;
//            sum+= m*(j+m) + (m -1)*m/2.0;
//        }
        long long int sum = (n*m)/2;
        printf("Case %d: %lld\n",i,sum);
    }
    return 0;
}
