#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int testcase;
    cin>>testcase;
    for(int i=1;i<=testcase;i++){
        long long int cash;
        cin>>cash;
        double tax;
        if(cash<=180000){
            cout<<"Case "<<i<<": "<<0<<endl;
            continue;
        }
        else if(cash>18000 and cash<=480000) {
            cash-=180000.0;
            tax=(cash)*0.1;
        }
        else if(cash>480000 and cash<=880000) {
            tax=((cash-480000.0)*0.15)+30000.0;
        }
        else if(cash>880000 and cash<=1180000) {
            tax=((cash-880000.0)*0.2)+90000.0;
        }
        else {
            tax=((cash-1180000.0)*0.25)+150000.0;
        }
        long long int result;
        if(tax<2000) tax=2000;
        result = ceil (tax);
        cout<<"Case "<<i<<": "<<result<<endl;
    }
    return 0;
}
