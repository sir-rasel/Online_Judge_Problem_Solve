#include <stdio.h>
int main(){
    int num;
    while(scanf("%d",&num)!=EOF){
        num=(720*num)/360;
        if(num%12==0) printf("Y\n");
        else printf("N\n");
    }
    return 0;
}
