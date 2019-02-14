#include <iostream>
using namespace std;

int main(){
    int t1,t2,a;
    cin>>t1>>t2;
    for(int i=0;i<10;i++){
        cin>>a;
        t1+=a*20;
    }
    if(t1>t2) cout<<"Dirty debug :("<<endl;
    else cout<<"No chance."<<endl;
    return 0;
}
