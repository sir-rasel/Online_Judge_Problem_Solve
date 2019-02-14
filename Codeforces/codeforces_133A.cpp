#include <bits/stdc++.h>
using namespace std;

int main(){
    char c;
    bool flag=false;
    while(scanf("%c",&c) and c!='\n'){
        if(c=='H' or c=='Q' or c=='9') flag=true;
    }
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
