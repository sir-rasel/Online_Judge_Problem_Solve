#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int sum=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='+') sum++;
        else sum--;
    }
    printf("%d\n",sum);
    return 0;
}
