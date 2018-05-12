#include <stdio.h>
int main(){
    int test,a,b,c,d,i;
    while(scanf("%d",&test)&& test!=0){
        scanf("%d %d",&a,&b);
        for(i=0;i<test;i++){
            scanf("%d %d",&c,&d);
            if(c==a || d==b) printf("divisa\n");
            else if(c<a && d>b) printf("NO\n");
            else if(c>a && d>b) printf("NE\n");
            else if(c>a && d<b) printf("SE\n");
            else if(c<a && d<b) printf("SO\n");
        }
    }
    return 0;
}
