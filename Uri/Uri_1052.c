#include <stdio.h>
char month[12][15]={"January","February","March","April","May","June","July","August","September","October","November","December"};
int main(){
    int n;
    scanf("%d",&n);
    printf("%s\n",month[n-1]);
    return 0;
}
