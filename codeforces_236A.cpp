#include <bits/stdc++.h>
using namespace std;

bool indexArray[26];

int main(){
    char c;
    int distinctcharercter=0;
    while(scanf("%c",&c) and c!='\n'){
        if(indexArray[c-'a']==false) distinctcharercter++;
        indexArray[c-'a']=true;
    }
    if(distinctcharercter%2==0) cout<<"CHAT WITH HER!"<<endl;
    else cout<<"IGNORE HIM!"<<endl;
    return 0;
}
