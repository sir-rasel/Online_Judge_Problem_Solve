#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1,s2;
    cin>>s1>>s2;
    bool flag=false;
    for(int i=0;i<s1.size();i++){
        if(s1==s2) {
            flag=true;
            break;
        }
        else{
            s1.insert(s1.begin(),s1.back());
            s1.pop_back();
        }
    }
    if(flag) printf("Yes\n");
    else printf("No\n");
    return 0;
}
