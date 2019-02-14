#include<bits/stdc++.h>
using namespace std;

int main(){
    int h,m;
    scanf("%d:%d",&h,&m);
    if(h>=12) h-=12;
    int minuteAngle=m*6;
    double hourAngle=(h*30)+(m*0.5);
    cout<<hourAngle<< " "<<minuteAngle<<endl;
    return 0;
}
