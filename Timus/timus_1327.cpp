#include <iostream>
using namespace std;

int main(){
    int a,b,count=0;
    cin>>a>>b;
    if(a==b && (a%2==0 && b%2==0)){
        cout<<0<<endl;
        return 0;
    }
    if(a%2==0) a++;
    int c = b-a;
    cout<<c/2+1<<endl;
    return 0;
}
