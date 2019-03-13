#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<char>postfix;
    string s;
    getline(cin,s);
    for(int i=0; i<s.length(); i++){
        if(s[i]=='(') postfix.push(s[i]);
        else if(s[i]==')'){
            if(postfix.empty()){
                postfix.push(s[i]);
                break;
            }
            while(postfix.top()!='(' and !postfix.empty()) postfix.pop();
            postfix.pop();
        }
    }
    if(postfix.empty()) printf("Yes\n");
    else printf("No\n");
    return 0;
}
