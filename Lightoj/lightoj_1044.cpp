#include<bits/stdc++.h>
#define Max 1005
using namespace std;

int palindrome[Max][Max],partitioning[Max];
int n;
string s;

bool isPalindrome(int l,int r){
    if(l>r) return true;
    if(palindrome[l][r]!=-1) return palindrome[l][r];
    if(s[l]==s[r] and isPalindrome(l+1,r-1))
        return palindrome[l][r]=1;
    else return palindrome[l][r]=0;
}

int dp(int l){
    if(l>=n) return 0;
    if(partitioning[l]) return partitioning[l];
    int ret = INT_MAX;
    for(int r=l;r<n;r++)
        if(isPalindrome(l,r))
            ret = min(ret,1+dp(r+1));
    return partitioning[l]=ret;
}

int main(){
    int test,cs=1;
    scanf("%d",&test);
    getchar();
    while(test--){
        memset(palindrome,-1,sizeof palindrome);
        memset(partitioning,0,sizeof partitioning);
        getline(cin,s);
        n=s.size();
        int ans = dp(0);
        printf("Case %d: %d\n",cs++,ans);
    }
    return 0;
}
