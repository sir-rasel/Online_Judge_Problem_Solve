#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    for(int i=0,j=s.size()-1;i<j;i++,j--){
        if(s[i]!=s[j]){
            printf("No\n");
            return 0;
        }
    }
    printf("Yes\n");
    return 0;
}
