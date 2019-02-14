#include <stdio.h>
#include <math.h>

int main(){
    int a;
    int b,c;
    while(scanf("%d",&a) && a){
        b=ceil(pow(a,(1/3.0)));
        c=ceil(pow(a,(1/2.0)));
        if(c*c==a && b*b*b==a)
            printf("Special\n");
        else printf("Ordinary\n");
    }
    return 0;
}
