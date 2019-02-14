#include <stdio.h>
int main(){
    int test,stu,mar[1001],i,count,sum;
    double ave;
    char a='%';
    scanf("%d",&test);
    while(test--){
        count=0;
        sum=0;
        scanf("%d",&stu);
        for(i=0;i<stu;i++){
            scanf("%d",&mar[i]);
            sum+=mar[i];
        }
        ave=sum/stu;
        for(i=0;i<stu;i++){
            if(mar[i]>ave) count++;
        }
        ave=(count/(double)stu)*100.00;
        printf("%.3lf%c\n",ave,a);
    }
    return 0;
}
