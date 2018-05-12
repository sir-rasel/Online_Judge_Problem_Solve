#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if((a*b)%2==0) printf("[:=[first]\n");
    else printf("[second]=:]\n");
    return 0;
}
