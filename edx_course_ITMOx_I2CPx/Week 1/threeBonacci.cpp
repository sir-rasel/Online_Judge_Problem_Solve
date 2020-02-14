#include "edx-io.hpp"
int main()
{
    long long int a0,a1,a2,n;
    long long int threeBonacci[100005]= {0};
    io >> a0 >> a1 >> a2 >> n;
    threeBonacci[0]=a0;
    threeBonacci[1]=a1;
    threeBonacci[2]=a2;
    for(long long int i=3; i<=n; i++)
    {
        threeBonacci[i]=threeBonacci[i-1]+threeBonacci[i-2]-threeBonacci[i-3];
    }
    io << threeBonacci[n] << '\n';
    return 0;
}
