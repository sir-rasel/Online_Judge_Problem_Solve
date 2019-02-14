#include <stdio.h>
int main(){
    char a[5],b[5];
    int i,flag;
    while(scanf("%c",&a[0])!=EOF){
        flag=0;
        for(i=1;i<5;i++) scanf(" %c",&a[i]);
        for(i=0;i<5;i++) {
            scanf(" %c",&b[i]);
            if(a[i]==b[i]) flag++;
        }
        getchar();
        if(flag==0) printf("Y\n");
        else printf("N\n");
    }
    return 0;
}
