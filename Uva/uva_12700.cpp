#include <iostream>
using namespace std;

int main(){
    int test,ban,www,tie,aban,n;
    char a;
    cin>>test;
    for(int j=1;j<=test;j++){
        ban=www=tie=aban=0;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a;
            if(a=='B') ban++;
            else if(a=='W') www++;
            else if(a=='T') tie++;
            else if(a=='A') aban++;
        }
        cout<<"Case "<<j<<": ";
        if(aban==n) cout<<"ABANDONED"<<endl;
        else if(ban+aban==n) cout<<"BANGLAWASH"<<endl;
        else if(www+aban==n) cout<<"WHITEWASH"<<endl;
        else if(ban>www) cout<<"BANGLADESH "<<ban<<" - "<<www<<endl;
        else if(ban<www) cout<<"WWW "<<www<<" - "<<ban<<endl;
        else if(ban==www) cout<<"DRAW "<<www<<" "<<tie<<endl;
    }
    return 0;
}
