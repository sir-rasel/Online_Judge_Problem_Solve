#include<bits/stdc++.h>
using namespace std;

int main(){
    string s,ans="";
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]!='B') ans.insert(ans.end(),s[i]);
        else if(!ans.empty()) ans.pop_back();
    }
    cout<<ans<<endl;
    return 0;
}
