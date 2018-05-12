#include <iostream>
using namespace std;

int main(){
    int a,b,c,d,ans;
    cin>>a>>b>>c>>d;
    if(a<=c){
        while(a<=c){
            if(a+b<=c){
                a+=b;
                ans=a;
            }
            else{
                ans=c;
                break;
            }
            if(c-d>=a){
                c-=d;
                ans=c;
            }
            else{
                ans=a;
                break;
            }
        }
    }
    else {
        ans=a;
    }
    cout<<ans<<endl;
    return 0;
}
