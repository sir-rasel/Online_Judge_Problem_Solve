#include<bits/stdc++.h>
using namespace std;

const int N = 1000;
bool dp[N][N];

int countPalindromicSubstring(string s){
    int cnt=0;
    memset(dp,false,sizeof(dp));
    for(int i=0;i<N;i++) dp[i][i]=true;
    for(int i=s.length()-1;i>=0;i--){
        for(int j=i+1;j<s.length();j++){
            if(s[i]==s[j] and ((i+1>j-1) || dp[i+1][j-1])){
                dp[i][j]=true;
                cnt++;
            }
        }
    }
    cnt+=s.length();
    return cnt;
}

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        string a;
        cin>>a;
        double x=(double)countPalindromicSubstring(a);
        double y=(a.size()*(a.size()+1))/2.0;
        printf("%.3f\n",x/y);
    }
    return 0;
}
