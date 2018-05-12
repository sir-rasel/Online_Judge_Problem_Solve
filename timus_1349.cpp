#include <iostream>
using namespace std;

int bigmod(int a,int b,int c=100);

int main(){
    int n,a,b,c;
    cin>>n;
    a=1,b=2,c=3;
    while(bigmod(a,n)+bigmod(b,n)<=bigmod(c,n)){
        if(bigmod(a,n)+bigmod(b,n)==bigmod(c,n)){
            cout<<a<<" "<<b<<" "<<c<<endl;
            break;
        }
        a++;
        b++;
        c++;
    }
    if(bigmod(a,n)+bigmod(b,n) > bigmod(c,n)){
        cout<<-1<<endl;
    }
    return 0;
}

int bigmod(int a,int b,int c){
    if(b==0) return 1%c;
    int x=bigmod(a,b/2,c);
    x=(x*x)%c;
    if(b%2==1) x=(x*a)%c;
    return x;
}
