#include <iostream>
using namespace std;

int main(){
    short int n,sum=0,grade,flag=0,flag1=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>grade;
        sum+=grade;
        if(grade!=5) flag++;
        if(grade==3) flag1++;
    }
    double average=double(sum)/n;
    if(flag==0) cout<<"Named"<<endl;
    else if(average>=4.5 and flag1==0) cout<<"High"<<endl;
    else if(average<4.5 and flag1==0) cout<<"Common"<<endl;
    else cout<<"None"<<endl;
    return 0;
}
