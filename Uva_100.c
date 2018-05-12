#include <stdio.h>

int main()
{
    int i,j,n,count,max;
    while(scanf("%d %d",&i,&j) !=EOF)
    {
        printf("%d %d",i,j);
        max=0;
        if(i<j)
        {
            while(i<=j)
            {
                count=1;
                n=i;
                while(n!=1)
                {
                    if(n%2==0) n/=2;
                    else n=n*3+1;
                    count++;
                }
                if(count>max) max=count;
                i++;
            }
            printf(" %d\n",max);
        }
        else
        {
            while(j<=i)
            {
                count=1;
                n=j;
                while(n!=1)
                {
                    if(n%2==0) n/=2;
                    else n=n*3+1;
                    count++;
                }
                if(count>max) max=count;
                j++;
            }
            printf(" %d\n",max);
        }
    }
    return 0;
}
