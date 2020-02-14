#include "edx-io.hpp"
int main()
{
    int n;
    io >> n;
    int ti[16];
    for(int i=0; i<n; i++) io >> ti[i];
    int sum = 0, counter = 0;

    while(true)
    {
        int minIdx=-1,minimum = 1000000;
        for(int i=0; i<n; i++)
        {
            if(ti[i]<minimum)
            {
                minimum = ti[i];
                minIdx = i;
            }
        }
        ti[minIdx] = 1000000;
        if(minIdx == -1)  break;
        if(minimum+sum <= 60*300)
        {
            sum+=minimum;
            counter ++;
        }
    }
    io << counter << '\n';
    return 0;
}
