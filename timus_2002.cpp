#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <cstdio>
using namespace std;

int main(){
    int test;
    string a,b,password;
    cin>>test;
    getchar();
    map<string,string>m;
    map<string,int>log;
    map<string,int>logout;
    vector<string>vec;
    while(test--){
        cin>>a;
        int flag=0;
        if(a=="register"){
            cin>>b>>password;
            for(vector<string>::iterator i=vec.begin();i!=vec.end();i++){
                if(*i==b and m[*i]==password){
                    flag++;
                    break;
                }
            }
            if(flag!=0) cout<<"fail: user already exists"<<endl;
            else {
                cout<<"success: new user added"<<endl;
                m[b]=password;
                vec.push_back(b);
            }
        }
        else if(a=="login"){
            cin>>b>>password;
            for(vector<string>::iterator i=vec.begin();i!=vec.end();i++){
                if(*i==b){
                    flag++;
                    break;
                }
            }
            if(flag==0) cout<<"fail: no such user"<<endl;
            else if(password!=m[b]){
                cout<<"fail: incorrect password"<<endl;
            }
            else if(password==m[b] and log[b]!=10) {
                cout<<"success: user logged in"<<endl;
                log[b]=10;
                logout[b]=0;
            }
            else {
                cout<<"fail: already logged in"<<endl;
            }
        }
        else if(a=="logout"){
            cin>>b;
            for(vector<string>::iterator i=vec.begin();i!=vec.end();i++){
                if(*i==b){
                    flag++;
                    break;
                }
            }
            if(flag==0) cout<<"fail: no such user"<<endl;
            else if(logout[b]==10) cout<<"fail: already logged out"<<endl;
            else if(log[b]==10) {
                cout<<"success: user logged out"<<endl;
                logout[b]=10;
                log[b]=0;
            }
            else cout<<"fail: no such user"<<endl;
        }
    }
    return 0;
}
