#include <stdio.h>
int main(){
    int num,count,i,a,j;
    scanf("%d",&num);
    for(j=1;j<=num;j++){
            count=0;
        for(i=0;i<13;i++){
            scanf("%d",&a);
            if(a==0) count++;
        }
        if(count==0) printf("Set #%d: Yes\n",j);
        else printf("Set #%d: No\n",j);
    }
    return 0;
}
