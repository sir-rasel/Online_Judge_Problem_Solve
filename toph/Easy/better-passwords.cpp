#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<char>pass;
    string s;
    cin>>s;
    for(auto c=s.begin();c!=s.end();c++){
        if(c==s.begin()) pass.push_back(toupper(*c));
        else if(*c=='i') pass.push_back('!');
        else if(*c=='s') pass.push_back('$');
        else if(*c=='o') {
            pass.push_back('(');
            pass.push_back(')');
        }
        else pass.push_back(*c);
    }
    pass.push_back('.');
    for(auto x:pass) printf("%c",x);
    printf("\n");
    return 0;
}
