#include <bits/stdc++.h>
using namespace std;

int main(){
    string first,second;
    cin>>first>>second;
    for(int start=0;start<first.length();start++){
        if(isupper(first[start])) {
            first[start]=tolower(first[start]);
        }
    }
    for(int start=0;start<second.length();start++){
        if(isupper(second[start])) {
            second[start]=tolower(second[start]);
        }
    }
    if(first==second) cout<<0<<endl;
    else if(first<second) cout<<-1<<endl;
    else cout<<1<<endl;
    return 0;
}
