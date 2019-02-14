#include <stdio.h>
int main(){
    int test;
    char a,b;
    scanf("%d",&test);
    while(test--){
        scanf(" %c%c",&a,&b);
        if(a=='a' || a=='h'){
            if (b=='1' || b=='8') printf("2\n");
            else if (b=='2' || b=='7') printf("3\n");
            else printf("4\n");
        }
        else if(a=='b' || a=='g'){
            if (b=='1' || b=='8') printf("3\n");
            else if (b=='2' || b=='7') printf("4\n");
            else printf("6\n");
        }
        else {
            if (b=='1' || b=='8') printf("4\n");
            else if (b=='2' || b=='7') printf("6\n");
            else printf("8\n");
        }
    }
    return 0;
}
