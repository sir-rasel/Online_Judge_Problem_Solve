#include <bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin>>test;
    while(test--){
        string s;
        cin>>s;
        if(s.size()==5) cout<<3<<endl;
        else {
            int c=0;
            if(s[0]=='o') c++;
            if(s[1]=='n') c++;
            if(s[2]=='e') c++;
            if(c>=2) cout<<1<<endl;
            else cout<<2<<endl;
        }
    }
    return 0;
}
