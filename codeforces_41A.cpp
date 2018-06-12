#include <bits/stdc++.h>
using namespace std;

int main(){
    char word1[101],word2[101];
    scanf("%s %s",word1,word2);
    int flag=0;
    if(strlen(word1)!=strlen(word2)) flag++;
    else {
        for(int i=0,j=strlen(word2)-1;i<strlen(word1) and j>=0;i++,j--){
            if(word1[i]!=word2[j]){
                flag++;
                break;
            }
        }
    }
    if(flag==0) printf("YES\n");
    else printf("NO\n");
    return 0;
}
