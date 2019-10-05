#include<bits/stdc++.h>
using namespace std;

map<string,int>mm;

int main(){
    int n,k=0;
    string s,ans="";
    cin>>n>>s;
    for(int i=0;i<n-1;i++){
        string temp="";
        temp+=s[i];
        temp+=s[i+1];
        mm[temp]++;
        if(k<mm[temp]){
            k=mm[temp];
            ans=temp;
        }
    }
    cout<<ans<<endl;
    return 0;
}
