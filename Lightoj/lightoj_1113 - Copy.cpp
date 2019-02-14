#include <bits/stdc++.h>
#define S 103
using namespace std;

string Browser[S];

int main(){
    int t, last, ind, cs = 0;
    string inp;
    cin >> t;
    while(t--){
        last = 0, ind = 0;
        Browser[last] = "http://www.lightoj.com/";
        cout << "Case " << ++cs << ":" << endl;
        while(cin >> inp){
            if(inp == "QUIT")break;
            else if(inp == "VISIT"){
                cin >> inp;
                cout << inp << endl;
                Browser[++ind] = inp;
                last = ind;
            }
            else if(inp == "FORWARD"){
                if(ind+1 > last)puts("Ignored");
                else cout << Browser[++ind] << endl;
            }
            else if(inp == "BACK"){
                if(ind-1 < 0)puts("Ignored");
                else cout << Browser[--ind] << endl;
            }
        }
    }
    return 0;
}
