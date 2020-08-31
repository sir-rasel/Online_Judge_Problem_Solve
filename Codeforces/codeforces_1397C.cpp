#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;


int main() {
    int n;
    scanf("%d",&n);
    vector<ll>a(n);
    for(int i=0; i<n; i++)
        scanf("%lld",&a[i]);

    if(n == 1)
        printf("1 1\n%lld\n1 1\n0\n1 1\n0\n",(-1)*a[0]);

    else{
        printf("%d %d\n",1,1);
        printf("%lld\n",(-1)*a[0]);
        a[0] = 0;

        printf("%d %d\n",2,n);
        for(int i=1;i<n;i++){
            printf("%lld ",((a[i]%n+n)%n) * (n-1));
            a[i] += (n -1)*((a[i]%n+n)%n);
        }
        printf("\n");

        printf("%d %d\n",1,n);
        for(int i=0;i<n;i++){
            printf("%lld ",(-1)*a[i]);
        }
        printf("\n");
    }

    return 0;
}
