#include <iostream>
using namespace std;

int main(){
    int a,b,c,x,y;
    cin>>a>>b>>c;
    if(a<=c and b>=c){
        x=a;
        y=c-x;
    }
    else if(a>=c and b<=c){
        y=b;
        x=c-y;
    }
    else if(a>c or b>c) {
        x=c;
        y=0;
    }
    else if(a+b>=c){
        x=a;
        y=c-x;
    }
    if( x+y==c and (x>=0 and x<=a) and (y>=0 and y<=b) ) cout<<x<<" "<<y<<endl;
    else cout<<"Impossible"<<endl;
    return 0;
}
