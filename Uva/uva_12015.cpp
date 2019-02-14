#include <bits/stdc++.h>
using namespace std;

int main(){
    string s[11];
    int n[11],large,test;
    cin>>test;
    for(int j=1;j<=test;j++){
        large=0;
        for(int i=0;i<10;i++){
            cin>>s[i]>>n[i];
            if(n[i]>large) large=n[i];
        }
        cout<<"Case #"<<j<<":"<<endl;
        for(int i=0;i<10;i++){
            if(n[i]==large) cout<<s[i]<<endl;
        }
    }
    return 0;
}
