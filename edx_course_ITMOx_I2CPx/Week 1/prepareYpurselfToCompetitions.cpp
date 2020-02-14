#include "edx-io.hpp"
int main()
{
    int n;
    io >> n;
    int pi[105],ti[105];
    for(int i=0; i<n; i++) io >> pi[i];
    for(int i=0; i<n; i++) io >> ti[i];
    int sum=0;
    bool pFlag=false,tFlag=false;
    for(int i=0; i<n; i++)
    {
        if(pi[i]<ti[i])
        {
            tFlag=true;
            sum+=ti[i];
        }
        else
        {
            pFlag=true;
            sum+=pi[i];
        }
    }
    if(!pFlag)
    {
        int diff=10000;
        int p=0,t=0;
        for(int i=0; i<n; i++)
        {
            if(ti[i]-pi[i]<diff)
            {
                p=pi[i];
                t=ti[i];
                diff=ti[i]-pi[i];
            }
        }
        sum-=t;
        sum+=p;
    }
    if(!tFlag)
    {
        int diff=10000;
        int p=0,t=0;
        for(int i=0; i<n; i++)
        {
            if(pi[i]-ti[i]<diff)
            {
                p=pi[i];
                t=ti[i];
                diff=pi[i]-ti[i];
            }
        }
        sum-=p;
        sum+=t;
    }
    io << sum << '\n';
    return 0;
}
