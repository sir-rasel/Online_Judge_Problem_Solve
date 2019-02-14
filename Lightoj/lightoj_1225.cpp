#include <bits/stdc++.h>
using namespace std;

int main(){
    int test,cs=0;
    scanf("%d",&test);
    while(test--){
        char s[15];
        scanf("%s",s);
        int i,j;
        for(i=0,j=strlen(s)-1;i<j;i++,j--){
            if(s[i]!=s[j]) break;
        }
        printf("Case %d: ",++cs);
        if(i>=j) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}
