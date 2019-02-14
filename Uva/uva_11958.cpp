#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;

int main(){
    int testcase;
    cin>>testcase;
    for(int i=1;i<=testcase;i++){
        int buses,mm,hh,minimumtime=100000000;
        char c;
        cin>>buses>>hh>>c>>mm;
        for(int j=0;j<buses;j++){
            int m,h,time;
            cin>>h>>c>>m>>time;
            int sum=(h*60+m)-(hh*60+mm);
            if(sum>=0) minimumtime=min(minimumtime,sum+time);
            else minimumtime=min(minimumtime,sum+time+1440);
        }
        printf("Case %d: %d\n",i,minimumtime);
    }
    return 0;
}
