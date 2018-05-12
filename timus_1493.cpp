#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    int a=0,b=0,temp;
    char num[7];
    cin>>num;

    a=(num[0]-48)+(num[1]-48)+(num[2]-48);
    b=(num[3]-48)+(num[4]-48)+(num[5]-48);

    temp=a;
    if(a==b) {
        cout<<a<<" "<<b<<endl;
        cout<<"Yes"<<endl;
        return 0;
    }

    if(num[2]-48==9){
        if(num[1]-48==9){
            a=(num[0]-48)+1;
        }
        else {
            a=(num[0]-48)+(num[1]-48)+1;
        }
    }
    else{
        a++;
    }

    if(a==b) {
        cout<<a<<" "<<b<<endl;
        cout<<"Yes"<<endl;
        return 0;
    }

    a=temp;
    if(num[5]-48==9){
        if(num[4]-48==9){
            b=(num[3]-48)+1;
        }
        else {
            b=(num[3]-48)+(num[4]-48)+1;
        }
    }
    else{
        b++;
    }
    cout<<a<<" "<<b<<endl;
    if(a==b) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}
