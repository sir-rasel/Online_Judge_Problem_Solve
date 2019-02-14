#include <bits/stdc++.h>
#define MAX 10003
#define M 10000007

long long int a, b, c, d, e, f;
long long int dp[MAX];

int fn(long long int n) {
    if( n == 0 ) return a;
    else if( n == 1 ) return b;
    else if( n == 2 ) return c;
    else if( n == 3 ) return d;
    else if( n == 4 ) return e;
    else if( n == 5 ) return f;
    else if(dp[n]!=-1) return dp[n];
    else {
        dp[n] = ((fn(n-1)%M)+(fn(n-2)%M)+(fn(n-3)%M)+(fn(n-4)%M)+(fn(n-5)%M)+(fn(n-6)%M))%M;
        return dp[n];
    }
}

int main() {
    long long int n, caseno = 0, cases;
    scanf("%lld", &cases);
    while( cases-- ) {
        for(int i=0;i<MAX;i++) dp[i] = -1;
        scanf("%lld %lld %lld %lld %lld %lld %lld", &a, &b, &c, &d, &e, &f, &n);
        printf("Case %lld: %d\n", ++caseno, fn(n)%M);
    }
    return 0;
}
