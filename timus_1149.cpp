#include <bits/stdc++.h>
using namespace std;

void a( int n, int k )
{
    printf("sin(%d",k);
    if ( k < n )
    {
        if ( k % 2 )
            printf("-");
        else
            printf("+");
        a( n, k + 1 );
    }
    -printf(")");
}

void s( int n, int k )
{
    if ( k < n )
    {
        printf("(");
        s( n, k + 1 );
        printf(")");
    }
    a( n - k + 1, 1 );
    printf("+%d",k);
}

int main()
{
    int n;
    cin>>n;
    s(n,1);
    return 0;
}
