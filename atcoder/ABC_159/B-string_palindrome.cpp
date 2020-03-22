#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s,int l,int r){
    while(l<r){
        if(s[l]!=s[r]) return false;
        else l++,r--;
    }
    return true;
}

int main(){
    string s;
    cin>>s;
    int len = s.length();
    if(isPalindrome(s,0,len-1) and isPalindrome(s,0,(len-2)/2) and isPalindrome(s,(len+2)/2,len-1))
        printf("Yes\n");
    else printf("No\n");
    return 0;
}
