#include<bits/stdc++.h>
using namespace std;

int main(){
    string s[8];
    for(int i=0;i<8;i++) cin>>s[i];

    int ans1=0,ans2=0;
    for(int i=0;i<8;i++){
        bool flag1=true,flag2=true;
        for(int j=0;j<8;j++){
            if(s[i][j]=='W') flag1=false;
            if(s[j][i]=='W') flag2=false;
        }
        if(flag1) ans1++;
        if(flag2) ans2++;
    }
    if(ans1+ans2<=14) printf("%d\n",ans1+ans2);
    else printf("%d\n",8);
    return 0;
}
