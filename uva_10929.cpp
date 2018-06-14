#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    string number;
    while(cin>>number and number!="0"){
        int sum1=0,sum2=0;
        for(int i=0;i<number.length();i++){
            if((i+1)%2==0) sum2+=number[i]-48;
            else sum1+=number[i]-48;
        }
        int temp=abs(sum1-sum2);
        if(temp%11==0) cout<<number<<" is a multiple of 11."<<endl;
        else cout<<number<<" is not a multiple of 11."<<endl;
    }
    return 0;
}
