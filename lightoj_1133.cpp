#include <cstdio>
int main()
{
    int tst, i;
    scanf("%d", &tst);
    for(i=1; i<=tst; i++)
    {
        int n, m, D;
        scanf("%d%d", &n, &m);
        int ara[n], j, k, l, tmp, x, y;
        for(j=0; j<n; j++)
            scanf("%d", &ara[j]);
        for(k=0; k<m; k++)
        {
            char step[2];
            scanf("%s", step);
            if(step[0]=='S')
            {
                scanf("%d", &D);
                for(j=0; j<n; j++)
                    ara[j]+=D;
            }
            else if(step[0]=='M')
            {
                scanf("%d", &D);
                for(j=0; j<n; j++)
                    ara[j]*=D;
            }
            else if(step[0]=='D')
            {
                scanf("%d", &D);
                for(j=0; j<n; j++)
                    ara[j]/=D;
            }
            else if(step[0]=='R')
            {
                for(j=0,l=n-1; j<n/2; j++, l--)
                {
                    tmp = ara[j];
                    ara[j] = ara[l];
                    ara[l] = tmp;
                }
            }
            else if(step[0]=='P')
            {
                scanf("%d%d", &x, &y);
                tmp = ara[x];
                ara[x] = ara[y];
                ara[y] = tmp;
            }
        }
        printf("Case %d:\n", i);
        for(j=0; j<n-1; j++)
            printf("%d ", ara[j]);
        printf("%d\n", ara[j]);
    }
    return 0;
}
