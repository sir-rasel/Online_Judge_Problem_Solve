#include <bits/stdc++.h>
using namespace std;

int main(){
    char c;
    int luckydigit=0;
    while(scanf("%c",&c) and c!='\n'){
        if(c=='4' or c=='7') luckydigit++;
    }
    if(luckydigit==4 or luckydigit==7) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
