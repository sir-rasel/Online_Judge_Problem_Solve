#include <iostream>
using namespace std;

int main(){
    int n,k,sum1=0,sum2=0,b,g;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>b>>g;
        sum1+=b;
        sum2+=g;
    }
    sum1=sum1+k-(n*2+2);
    int sum=sum1-sum2;
    if(sum<0) cout<<"Big Bang!"<<endl;
    else cout<<sum<<endl;
    return 0;
}
