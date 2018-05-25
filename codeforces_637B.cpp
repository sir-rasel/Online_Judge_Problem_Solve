#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string s;
    vector<string>v;
    map<string,int>m;
    scanf("%d",&n);
    while(n--){
        cin>>s;
        v.push_back(s);
    }
    for(int i=v.size()-1;i>=0;i--){
        if(m[v[i]]==0){
            cout<<v[i]<<endl;
            m[v[i]]++;
        }
    }
    return 0;
}

