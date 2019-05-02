#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    int up=0,low=0;
    for(int i=0;i<s.size();i++){
        if(isupper(s[i])) up++;
        else if(islower(s[i])) low++;
    }
    printf("%d %d\n",up,low);
    return 0;
}
