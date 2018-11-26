#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    deque<char>cypherMassage;
    int n=s.size();
    for(int i=0;i<n;i++){
        if(cypherMassage.empty()) cypherMassage.push_back(s[i]);
        else{
            if(cypherMassage.back()!=s[i]) cypherMassage.push_back(s[i]);
            else cypherMassage.pop_back();
        }
    }
    while(!cypherMassage.empty()){
        printf("%c",cypherMassage.front());
        cypherMassage.pop_front();
    }
    return 0;
}
