#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    n = (n/2.0)*(1+n);
    if(n%2==0) printf("black\n");
    else printf("grimy\n");
    return 0;
}
