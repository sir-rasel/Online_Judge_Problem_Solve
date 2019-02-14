#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int a,b,l,r,c;
    cin>>a>>b;
    l=120+2*(b-40);
    r=119+2*(a-40);
    c=max(l,r);
    cout<<c<<endl;
    return 0;
}
