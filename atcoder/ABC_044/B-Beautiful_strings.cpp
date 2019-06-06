#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    string s;
    cin>>s;
    map<char,int>check;
    for(int i=0;i<s.size();i++) check[s[i]]++;
    bool flag=true;
    for(auto x:check){
        if(x.second%2!=0) {
            flag=false;
            break;
        }
    }
    if(flag) printf("Yes\n");
    else printf("No\n");
    return 0;
}
