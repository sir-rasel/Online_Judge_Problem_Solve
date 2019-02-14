#include <iostream>
#include <string>

using namespace std;

int main(){
    string a,b;
    int i=0,j=0,k=0,test;
    cin>>test;
    while(test--){
        cin>>a>>b;
        if(a=="Emperor") i++;
        else if(a=="Macaroni") j++;
        else if(a=="Little") k++;
    }
    if(i>j && i>k) cout<<"Emperor Penguin"<<endl;
    else{
        if(j>k) cout<<"Macaroni Penguin"<<endl;
        else cout<<"Little Penguin"<<endl;
    }
    return 0;
}
