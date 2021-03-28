#include <bits/stdc++.h>
using namespace std;

int main(){
    int test,cs=1;
    scanf("%d",&test);
    while(test--){
        int x,y;
        string s;
        cin>>x>>y>>s;

        int i=0,j=int(s.size())-1;
        for(i=0;i<s.size();i++)
            if(s[i]!='?') break;
        for(j;j>=0;j--)
            if(s[j]!='?') break;

        int ans = 0;
        for(int k = i;k<=j;k++) {
            if(s[k] == '?'){
                if(k > i and k < j){
                    if(s[k-1] == s[k+1])
                        s[k] = s[k-1];
                    else{
                        if(s[k+1] == '?') s[k] = s[k-1];
                        else if(s[k-1]=='J')
                            s[k] = 'J';
                        else
                            s[k] = 'C';
                    }
                }
            }
            else{
                if(k != i){
                    string str = "";
                    str += s[k-1];
                    str += s[k];

                    if(str == "JC") ans += y;
                    else if(str == "CJ") ans += x;
                }
            }
        }

        printf("Case #%d: %d\n",cs++,ans);
    }
    return 0;
}
