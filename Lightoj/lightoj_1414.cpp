#include <bits/stdc++.h>
using namespace std;

int main(){
    int test;
    scanf("%d",&test);
    for(int i=1;i<=test;i++){
        string m1,m2;
        char c;
        int d1,d2,y1,y2;
        cin>>m1>>d1>>c>>y1;
        cin>>m2>>d2>>c>>y2;
        if(m1!="January" and m1!="February") y1++;
        if(m2=="January") y2--;
        else if(m2=="February" and d2<29) y2--;
        int leap1 = (y2/4)-(y2/100)+(y2/400);
        int leap2 = ((y1-1)/4)-((y1-1)/100)+((y1-1)/400);
        printf("Case %d: %d\n",i,leap1-leap2);
    }
    return 0;
}
