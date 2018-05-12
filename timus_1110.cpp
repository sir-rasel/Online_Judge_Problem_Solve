#include <iostream>
using namespace std;

int bigmod(int a,int b,int m);

int main(){
    int n,m,y,temp=0;
    cin>>n>>m>>y;
    for(int i=0;i<m;i++){
        int X=bigmod(i,n,m);
        if(X==y){
            temp++;
            cout<<i<<" ";
        }
    }
    if(temp==0) cout<<-1;
    cout<<endl;
    return 0;
}

int bigmod(int a,int b,int m){
    if(b==0) return 1%m;
    int x = bigmod(a,b/2,m);
    x = (x*x)%m;
    if(b%2==1) x = (x*a)%m;
    return x;
}
