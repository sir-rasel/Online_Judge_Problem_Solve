#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    int test,cs=1;
    scanf("%d",&test);
    while(test--){
        string s;
        cin>>s;

        int br=0;
        deque<char>ans;
        for(int i=0;i<s.size();i++){
            int t = s[i]-'0';
            if(br==t) ans.push_back(t+'0');
            else if(br<t){
                while(br!=t){
                    ans.push_back('(');
                    br++;
                }
                ans.push_back(t+'0');
            }
            else{
                while(br!=t){
                    ans.push_back(')');
                    br--;
                }
                ans.push_back(t+'0');
            }
        }
        while(br!=0) ans.push_back(')'),br--;

        printf("Case #%d: ",cs++);
        for(auto it:ans) printf("%c",it);
        printf("\n");
    }
    return 0;
}
