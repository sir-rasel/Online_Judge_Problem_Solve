#include <stdio.h>
int main(){
    char a,b,c;
    while(scanf("%c %c %c",&a,&b,&c)!=EOF){
            getchar();
        if((a=='0' && b=='0' && c=='0') || (a=='1' && b=='1' && c=='1'))
            printf("*\n");
        else if(a=='1' && b=='0' && c=='0')
            printf("A\n");
        else if(a=='0' && b=='1' && c=='0')
            printf("B\n");
        else if(a=='0' && b=='0' && c=='1')
            printf("C\n");
        else if(a=='0' && b=='1' && c=='1')
            printf("A\n");
        else if(a=='1' && b=='0' && c=='1')
            printf("B\n");
        else if(a=='1' && b=='1' && c=='0')
            printf("C\n");
    }
    return 0;
}
