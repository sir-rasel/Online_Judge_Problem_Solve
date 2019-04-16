#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    while(getline(cin,s)){
        int counter=0,add=0;
        for(int i=0;i<s.size();i++){
            if( (s[i]>='a' and s[i]<='z') or (s[i]>='A' and s[i]<='Z') ) add=1;
            else counter+=add,add=0;
        }
        counter+=add;
        printf("%d\n",counter);
    }
    return 0;
}
