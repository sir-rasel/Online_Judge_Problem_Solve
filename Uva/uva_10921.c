#include <stdio.h>
#include <string.h>
int main(){
    char number[30];
    int n,i;
    while(scanf("%s",number)!=EOF){
        n=strlen(number);
        for(i=0;i<n;i++){
            if(number[i]>='A' && number[i]<='C') printf("2");
            else if(number[i]>='D' && number[i]<='F') printf("3");
            else if(number[i]>='G' && number[i]<='I') printf("4");
            else if(number[i]>='J' && number[i]<='L') printf("5");
            else if(number[i]>='M' && number[i]<='O') printf("6");
            else if(number[i]>='P' && number[i]<='S') printf("7");
            else if(number[i]>='T' && number[i]<='V') printf("8");
            else if(number[i]>='W' && number[i]<='Z') printf("9");
            else printf("%c",number[i]);
        }
        printf("\n");
    }
    return 0;
}
