#include<bits/stdc++.h>
using namespace std;

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        int n;
        string s;
        cin>>n>>s;
        int ans = 0;
        for(int i=0;i<n;i++){
            if(s[i]=='1') ans = max(ans,max(2*(i+1),2*(n-i)));
            else ans = max(ans,max((i+1),(n-i)));
        }
        printf("%d\n",ans);
    }
    return 0;
}
