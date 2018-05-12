#include <stdio.h>
int main(){
    int test,i,flag,flag1,n,temp;
    scanf("%d",&test);
    printf("Lumberjacks:\n");
    while(test--){
        flag=0;
        flag1=0;
        scanf("%d",&n);
        temp=n;
        for(i=0;i<9;i++){
            scanf("%d",&n);
            if(n<temp) flag++;
            if(n>temp) flag1++;
            temp=n;
        }
        if(flag==0 || flag1==0) printf("Ordered\n");
        else printf("Unordered\n");
    }
    return 0;
}
