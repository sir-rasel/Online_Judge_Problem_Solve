#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    int a=0,b=0,num,temp=1,temp1;
    cin>>num;
    temp1=num;
    while(num){
        if(temp<4) b+=num%10;
        else a+=num%10;
        num/=10;
        temp++;
    }
    if(a==b){
        cout<<"Yes"<<endl;
        return 0;
    }

    num=temp1-1;
    temp=1;
    a=b=0;
    while(num){
        if(temp<4) b+=num%10;
        else a+=num%10;
        num/=10;
        temp++;
    }
    if(a==b){
        cout<<"Yes"<<endl;
        return 0;
    }

    num=temp1+1;
    temp=1;
    a=b=0;
    while(num){
        if(temp<4) b+=num%10;
        else a+=num%10;
        num/=10;
        temp++;
    }
    if(a==b) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}
