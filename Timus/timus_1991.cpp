#include <iostream>
using namespace std;

int main(){
    int n,k,num,boom=0,droid=0;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>num;
        if(num>k) boom+=num-k;
        else if(num<k) droid+=k-num;
    }
    cout<<boom<<" "<<droid<<endl;
    return 0;
}
