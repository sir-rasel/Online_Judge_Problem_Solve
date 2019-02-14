#include <iostream>
using namespace std;

int main(){
    int a;
    char b;
    cin>>a>>b;
    if(a==1 || a==2){
        if(b=='A' || b=='D') cout<<"window"<<endl;
        else cout<<"aisle"<<endl;
    }
    else if(a>2 && a<21){
        if(b=='A' || b=='F') cout<<"window"<<endl;
        else if(b=='B' || b=='C' || b=='D' || b=='E') cout<<"aisle"<<endl;
        else cout<<"neither"<<endl;
    }
    else{
        if(b=='A' || b=='K') cout<<"window"<<endl;
        else if(b=='C' || b=='D' || b=='G' || b=='H') cout<<"aisle"<<endl;
        else cout<<"neither"<<endl;
    }
    return 0;
}
