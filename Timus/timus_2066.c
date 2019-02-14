#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(b==0 || b==1 || c==1) printf("%d\n",a-b-c);
    else  printf("%d\n",a-b*c);
    return 0;
}
