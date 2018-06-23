#include <iostream>
using namespace std;

int main(){
    int friendhouse;
    cin>>friendhouse;
    int numberofmoves;
    if(friendhouse%5==0) numberofmoves=friendhouse/5;
    else numberofmoves=friendhouse/5+1;
    cout<<numberofmoves<<endl;
    return 0;
}
