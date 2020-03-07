#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

int main(){
    string s;
    cin>>s;
    bool Af = false,Bf = false;
    for(int i=0;i<3;i++) {
        if(s[i]=='A') Af=true;
        if(s[i]=='B') Bf=true;
    }
    if(Af and Bf) printf("Yes\n");
    else printf("No\n");
    return 0;
}
