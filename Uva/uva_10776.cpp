#include<bits/stdc++.h>
using namespace std;

string s;
int len;
bool taken[50];
vector<char>perm;

void gen(int idx){
    if(perm.size()==len){
        for(auto x:perm) cout<<x;
        cout<<endl;
        return;
    }
    for(int i=idx;i<s.size();i++){
        if(perm.size() > 0 && perm[ perm.size()-1 ] > s[i] )  continue;
        if(!taken[i]){
            taken[i]=true;
            perm.push_back(s[i]);
            gen(idx+1);
            perm.pop_back();
            taken[i]=false;
            while(s[i]==s[i+1] && i+1 < s.size() ) i++;
        }
    }
}

int main(){
    while(cin>>s>>len){
        sort(s.begin(),s.end());
        memset(taken,false,sizeof(taken));
        perm.clear();
        gen(0);
    }
    return 0;
}
