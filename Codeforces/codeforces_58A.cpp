#include <bits/stdc++.h>
using namespace std;

int main(){
    string word;
    cin>>word;
    map<char,int>chekingsmap;
    int i;
    for(i=0;i<word.length();i++){
        if(word[i]=='h') {
            chekingsmap['h']++;
            break;
        }
    }
    for(i;i<word.length();i++){
        if(word[i]=='e') {
            chekingsmap['e']++;
            break;
        }
    }
    for(i;i<word.length();i++){
        if(word[i]=='l') {
            chekingsmap['l']++;
            if(chekingsmap['l']==2)
                break;
        }
    }
    for(i;i<word.length();i++){
        if(word[i]=='o') {
            chekingsmap['o']++;
            break;
        }
    }
    if(chekingsmap['h']==1 and chekingsmap['e']==1 and chekingsmap['l']==2 and chekingsmap['o']==1)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
