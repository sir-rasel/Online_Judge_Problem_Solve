#include <bits/stdc++.h>
using namespace std;

int main(){
    string a,b;
    char c;
    long long int test,date1,year1,date2,year2,leapday,leap1,leap2;
    cin>>test;
    for(int i=1;i<=test;i++){
        cin>>a>>date1>>c>>year1;
        cin>>b>>date2>>c>>year2;
        if(a!="January" && a!="February") year1++;
        if(b=="January") year2--;
        else if(b=="February"){
            if(date2<29) year2--;
        }
        leap1= ( (year1-1)/4 - (year1-1)/100 + (year1-1)/400 );
        leap2= ( (year2)/4 - (year2)/100 + (year2)/400 );
        leapday = leap2-leap1;
        cout<<"Case "<<i<<": "<<leapday<<endl;
    }
    return 0;
}
