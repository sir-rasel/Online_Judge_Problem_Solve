#include <stdio.h>
int main(){
    int i,j,test,a[7],sum;
    double grade;
    scanf("%d",&test);
    for(i=1;i<=test;i++){
        sum=0;
        for(j=0;j<7;j++)
            scanf("%d",&a[j]);
        if(a[4]>a[5] && a[4]>a[6]){
            sum+=a[4];
            if(a[5]>a[6]) sum+=a[5];
            else sum+=a[6];
        }
        else {
            if(a[5]>a[6]) {
                sum+=a[5];
                if(a[4]>a[6]) sum+=a[4];
                else sum+=a[6];
            }
            else{
                sum+=a[6];
                if(a[4]>a[5]) sum+=a[4];
                else sum+=a[5];
            }
        }
        grade=a[0]+a[1]+a[2]+a[3]+sum/2.0;
        if(grade>=90) printf("Case %d: A\n",i);
        else if(grade>=80) printf("Case %d: B\n",i);
        else if(grade>=70) printf("Case %d: C\n",i);
        else if(grade>=60) printf("Case %d: D\n",i);
        else printf("Case %d: F\n",i);
    }
    return 0;
}
