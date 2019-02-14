#include <bits/stdc++.h>
using namespace std;

int main(){
    int test;
    scanf("%d",&test);
    for(int cs=1;cs<=test;cs++){
        int r1,c1,r2,c2;
        scanf("%d %d %d %d",&r1,&c1,&r2,&c2);
        if(abs(r1-r2)==abs(c1-c2))
            printf("Case %d: 1\n",cs);
        else if((r1+r2)%2==(c1+c2)%2)
            printf("Case %d: 2\n",cs);
        else printf("Case %d: impossible\n",cs);
    }
    return 0;
}
