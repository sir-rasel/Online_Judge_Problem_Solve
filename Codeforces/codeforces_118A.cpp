#include <bits/stdc++.h>
using namespace std;

int main(){
    char c;
    vector<char>v;
    while(scanf("%c",&c) and c!='\n'){
        if(c!='A' and c!='a' and c!='E' and c!='e' and c!='I' and c!='i' and c!='O' and c!='o' and c!='U' and c!='u' and c!='Y' and c!='y'){
            v.push_back('.');
            if(isupper(c)) {
                char temp=tolower(c);
                v.push_back(temp);
            }
            else v.push_back(c);
        }
    }
    for(int i=0;i<v.size();i++) cout<<v[i];
    cout<<endl;
    return 0;
}
