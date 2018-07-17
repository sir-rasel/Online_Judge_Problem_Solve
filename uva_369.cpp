#include <iostream>
#include <cstring>
using namespace std;

long long int dp[103][103];

long long int combinatorics(int n,int m){
    if(n==m) return 1;
    else if(m==1) return n;
    else if(dp[n][m]==-1){
        dp[n][m] = ( combinatorics(n-1,m-1)+combinatorics(n-1,m) );
        return dp[n][m];
    }
    else return dp[n][m];;
}

int main(){
    int n,m;
    long long int c;
    memset(dp, -1, sizeof(dp[0][0])*103*103);
    while(cin>>n>>m and (n!=0 and m!=0)){
        c = combinatorics(n,m);
        cout<< n << " things taken " << m << " at a time is "<< c << " exactly."<<endl;
    }
    return 0;
}
