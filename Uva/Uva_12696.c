#include <stdio.h>
int main(){
    int test,count=0;
    double len,wid,dep,kg,sum;
    scanf("%d",&test);
    while(test--){
        scanf("%lf %lf %lf %lf",&len,&wid,&dep,&kg);
        sum=len+wid+dep;
        if(sum<=125 && kg<=7){
             printf("1\n");
             count++;
        }
        else if(len<=56 && wid<=45 && dep<=25 && kg<=7){
            printf("1\n");
            count++;
        }
        else printf("0\n");
    }
    printf("%d\n",count);
    return 0;
}
