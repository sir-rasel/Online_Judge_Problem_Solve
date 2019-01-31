#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define sz 100000100

const int real_size = 5761509;

ll col[sz/64+10];
int prime[real_size], cnt;
unsigned dp[real_size];

void seive(){
    long long i,j,k;
    for(i=3;i<sz;i+=2)
         if(!(col[i/64]&(1LL<<(i%64))))
                for(j=i*i;j<sz;j+=2*i)
                    col[j/64]|=(1LL<<(j%64));

    prime[cnt++]=2;
    for (int i = 3; i<sz; i+=2)
        if(!(col[i/64]&(1LL<<(i%64))))
            prime[cnt++] = i;
}


unsigned find_sqrt_ans(int x){
    int k = sqrt(x), now;
    unsigned ret=1, cnts;
    for (int i = 0; prime[i]<=k; i++){
        now = x/prime[i];
        cnts=1;
        while(now>=prime[i])
        {
            now/=prime[i];
            cnts*=prime[i];
        }
        ret*=cnts;
    }
    return ret;
}


int main(){
    int t, n, m, cas=1;
    unsigned ans;
    seive();
    dp[0]=2;
    for (int i = 1; i<real_size; i++) dp[i]=dp[i-1]*prime[i];
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        ans=find_sqrt_ans(n);
        ans*=dp[upper_bound(prime,prime+cnt,n)-prime-1];
        printf("Case %d: %u\n", cas++,ans);
    }
   return 0;
}
