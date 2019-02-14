#include <bits/stdc++.h>
using namespace std;

int counter[30];

int main(){
    //freopen("input.txt","r",stdin);
    int test;
    scanf("%d\n",&test);
    for(int i=1;i<=test;i++){
        memset(counter,0,sizeof(counter));
        char a[110],b[110];
        gets(a);
        for(int j=0;j<strlen(a);j++){
            if(a[j]!=' ') {
                a[j]=tolower(a[j]);
                counter[a[j]-'a']++;
            }
        }
        gets(b);
        for(int j=0;j<strlen(b);j++){
            if(b[j]!=' ') {
                b[j]=tolower(b[j]);
                counter[b[j]-'a']--;
            }
        }
        bool flag = true;
        for(int j=0;j<26;j++){
            if(counter[j]!=0) flag=false;
        }
        if(flag) printf("Case %d: Yes\n",i);
        else printf("Case %d: No\n",i);
    }
    return 0;
}
