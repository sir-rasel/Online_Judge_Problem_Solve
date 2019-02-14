#include <stdio.h>
#include <string.h>

int main(){
    char a[15];
    int b=1;
    while(1){
        scanf("%s",a);
        if(strcmp(a,"#")==0) break;
        else if(strcmp(a,"HELLO")==0) printf("Case %d: ENGLISH\n",b);
        else if(strcmp(a,"HOLA")==0) printf("Case %d: SPANISH\n",b);
        else if(strcmp(a,"HALLO")==0) printf("Case %d: GERMAN\n",b);
        else if(strcmp(a,"BONJOUR")==0) printf("Case %d: FRENCH\n",b);
        else if(strcmp(a,"CIAO")==0) printf("Case %d: ITALIAN\n",b);
        else if(strcmp(a,"ZDRAVSTVUJTE")==0) printf("Case %d: RUSSIAN\n",b);
        else printf("Case %d: UNKNOWN\n",b);
        b++;
    }
    return 0;
}
