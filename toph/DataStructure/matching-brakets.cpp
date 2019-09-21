#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    stack<char>a;
    for(int i=0;i<s.length(); i++){
        if(s[i]=='(' or s[i]=='{' or s[i]=='[') a.push(s[i]);
        else{
            if(a.empty()) {
                a.push(s[i]);
                break;
            }
            else if(s[i]==')'){
                if(a.top()=='(') a.pop();
            }
            else if(s[i]=='}'){
                if(a.top()=='{') a.pop();
            }
            else if(s[i]==']'){
                if(a.top()=='[') a.pop();
            }
        }
    }
    if(a.empty()) printf("Yes\n");
    else printf("No\n");
    return 0;
}
