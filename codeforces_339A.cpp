#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<char>store;
    char numberOrplus;
    while(scanf("%c",&numberOrplus) and numberOrplus!='\n'){
        if(numberOrplus!='+') store.push_back(numberOrplus);
    }
    sort(store.begin(),store.end());
    for(int start=0;start<store.size();start++){
        cout<<store[start];
        if(start!=store.size()-1) cout<<"+";
    }
    cout<<endl;
    return 0;
}
