#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    stack<char>st;
    for(int i=0;i<s.size();i++){
        if(st.empty()) st.push(s[i]);
        else {
            if(s[i]=='-' and st.top()=='-') st.pop();
            else if(s[i]=='+' and st.top()=='+') st.pop();
            else st.push(s[i]);
        }
    }
    if(st.empty()==true) printf("Yes\n");
    else printf("No\n");
    return 0;
}

