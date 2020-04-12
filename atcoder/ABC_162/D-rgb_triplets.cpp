#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll n,r=0,b=0,g=0,tc=0,c=0;
    string s;
    cin >> n;
    cin >> s;

    for (int i = 0; i < n; ++i){
        if(s[i] == 'R') r++;
        if(s[i] == 'G') g++;
        if(s[i] == 'B') b++;
    }
    tc = r*b*g;
    for (int i = 0; i < n; ++i){
        for (int j = i+1; j < n; ++j){
            if(j+(j-i) < n && j > i ){
                if (s[i] != s[j] && s[i] != s[j+(j-i)] && s[j] != s[j+(j-i)])
                    c++;
            }
        }
    }
    cout << tc-c << endl;
    return 0;
}
