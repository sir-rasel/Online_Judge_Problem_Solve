#include <bits/stdc++.h>
using namespace std;

int main(){
    string word;
    cin>>word;
    int flag=0;

    for(int i=1;i<word.length();i++){
        if(isupper(word[i])) flag++;
    }
    if(flag==word.length()-1) {
        for(int i=0;i<word.length();i++){
            if(isupper(word[i])) word[i]=tolower(word[i]);
            else word[i]=toupper(word[i]);
        }
        cout<<word<<endl;
    }
    else cout<<word<<endl;
    return 0;
}
