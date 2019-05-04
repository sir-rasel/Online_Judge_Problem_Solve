#include<bits/stdc++.h>
using namespace std;

int main(){
    int test,cs=1;
    scanf("%d",&test);
    while(test--){
        int r,c;
        char ch;
        scanf("%d %d",&r,&c);
        getchar();
        string str,str2;
        set<string>myset;
        char s[r+5][c+5];
        for(int i=0;i<r;i++) scanf("%s",s[i]);
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(s[i][j]=='X'){
                    if(str.size()>=2) myset.insert(str);
                    str.clear();
                }
                else if(j==c-1){
                    str+=s[i][j];
                    if(str.size()>=2) myset.insert(str);
                    str.clear();
                }
                else str+=s[i][j];
            }
        }
        for(int i=0;i<c;i++){
            for(int j=0;j<r;j++){
                if(s[j][i]=='X'){
                    if(str.size()>=2) myset.insert(str);
                    str.clear();
                }
                else if(j==r-1){
                    str+=s[j][i];
                    if(str.size()>=2)
                        myset.insert(str);
                    str.clear();
                }
                else str+=s[j][i];
            }
        }
        printf("Case %d: ",cs++);
        cout<<*(myset.begin())<<endl;
    }
    return 0;
}
