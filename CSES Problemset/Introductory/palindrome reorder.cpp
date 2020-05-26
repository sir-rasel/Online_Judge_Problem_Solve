#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

bool isPalindrome(string s){
    for(int i=0,j=s.size()-1;i<=j;i++,j--)
        if(s[i]!=s[j]) return false;
    return true;
}

int main(){
    string s;
    cin>>s;
    vector<int>a(26,0);
    for(int i=0;i<s.size();i++) a[s[i]-'A']++;

    string first="",second="";

    for(int i=0;i<26;i++){
        for(int j=0;j<a[i]/2;j++) first+=(i+'A');
        for(int j=0;j<a[i]/2;j++) second+=(i+'A');
        a[i]%=2;
    }
    for(int i=0;i<26;i++)
        for(int j=0;j<a[i];j++)
            first+=(i+'A');

    reverse(second.begin(),second.end());
    first+=second;

    if(isPalindrome(first)) cout<<first<<endl;
    else printf("NO SOLUTION\n");

    return 0;
}
