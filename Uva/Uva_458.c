#include <stdio.h>
#include <string.h>
int main(){
    char p[100];
    int count,i;
    while(scanf("%s",p)!=EOF){
        count=strlen(p);
        for(i=0;i<count;i++)
            printf("%c",p[i]-7);
        printf("\n");
    }
    return 0;
}
