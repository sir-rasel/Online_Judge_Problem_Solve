#include <cstdio>
using namespace std;

int main()
{
    int t;
    scanf("%d", &t);

    for(int tc = 1; tc <= t; ++tc) {
        long long n;
        scanf("%lld", &n);

        printf("Case %d: ", tc);

        if(n & 1) puts("Impossible");
        else {
            long long smallestEven = n & (-n);
            printf("%lld %lld\n", n/smallestEven, smallestEven);
        }
    }

    return 0;
}
