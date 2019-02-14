#include <bits/stdc++.h>
using namespace std;

bool isleap(int a);
int leapday(int year1,int year2);

int main(){
    string a,b;
    char c;
    int test,date1,year1,date2,year2,leap;
    cin>>test;
    for(int i=1;i<=test;i++){
        cin>>a>>date1>>c>>year1;
        cin>>b>>date2>>c>>year2;
        if(a!="January" && a!="February") year1++;
        if(b=="January") year2--;
        else if(b=="February"){
            if(date2<29) year2--;
        }
        if(isleap(year1)){
            leap=leapday(year1,year2);
        }
        else{
            int temp=ceil(year1/4.0),k=1;
            temp=temp*4;
            leap=leapday(temp,year2);
        }
        cout<<"Case "<<i<<": "<<leap<<endl;
    }
    return 0;
}

bool isleap(int a){
    if(a%4==0){
        if(a%100!=0 || a%400==0) return true;
        else return false;
    }
    else return false;
}

int leapday(int year1,int year2){
    int leapdays=0;
    for(int j=year1;j<=year2;j+=4){
        if(isleap(j)) leapdays++;
    }
    return leapdays;
}
