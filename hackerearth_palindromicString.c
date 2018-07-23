#include <stdio.h>
#include <string.h>
int main () {
    char word[105];
    int i,j;
    scanf ("%s",word);
    for (i=0,j=(strlen(word)-1);i<j;j--,i++){
        if (word[i]!=word[j]) break;
    }
    if (i<j){
        printf ("NO");
    }
    else {
        printf ("YES");
    }
    return 0;
}
