#include <iostream>
using namespace std;

int main(){
    int n,r,sum,cas=0;
    while((cin>>n>>r) && (n!=0 && r!=0)){
        sum=0;
        while(n>r){
            sum++;
            n=n-r;
        }
        if(sum>26) cout<<"Case "<<++cas<<": "<<"impossible"<<endl;
        else cout<<"Case "<<++cas<<": "<<sum<<endl;
    }
    return 0;
}
