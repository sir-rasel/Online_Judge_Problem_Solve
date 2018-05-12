#include <cstdio>
#include <cmath>

bool prime_factorized(long long int n);

int main(){
    long long int n;
    scanf("%lld",&n);
    if(prime_factorized(n)) printf("Yes\n");
    else printf("No\n");
    return 0;
}

bool prime_factorized(long long int n){
    long long int i,j,sum=0;
    for(i=2;i<=sqrt(n) and i<=n;i++){
        while(n%i==0){
            sum++;
            n/=i;
        }
        if(sum>20) return false;
        else if(sum==20 and n!=1) return false;
        else if(sum==20 and n==1) return true;
        if(pow(i + 1, 20 - sum) > n) return false;
    }
    if(n!=1) sum++;
    if(sum==20) return true;
    else return false;
}
