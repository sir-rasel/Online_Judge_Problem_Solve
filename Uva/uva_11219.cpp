#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int testcase;
    char symbol='#';
    cin>>testcase;
    for(int i=1;i<=testcase;i++){
        int cday,cmonth,cyear,bday,bmonth,byear;
        char c;
        cin>>cday>>c>>cmonth>>c>>cyear;
        cin>>bday>>c>>bmonth>>c>>byear;
        if(bday>cday) bmonth++;
        if(bmonth>cmonth) byear++;
        int age=cyear-byear;
        if(age<0) printf("Case %c%d: Invalid birth date\n",symbol,i);
        else if(age>130) printf("Case %c%d: Check birth date\n",symbol,i);
        else printf("Case %c%d: %d\n",symbol,i,age);
    }
    return 0;
}
