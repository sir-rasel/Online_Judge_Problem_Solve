#include <stdio.h>
int main(){
    long int a,b,c,i,test;
    scanf("%ld",&test);
    for(i=1;i<=test;i++){
        scanf("%ld %ld %ld",&a,&b,&c);
        if((a+b>c && a+c>b && b+c>a) && (a-b<c && a-c<b && b-c<a && c-a<b && c-b<a)&&(a>0 || b>0 || c>0)){
            if(a==b && a==c) printf("Case %ld: Equilateral\n",i);
            else if(a==b || a==c || b==c) printf("Case %ld: Isosceles\n",i);
            else printf("Case %ld: Scalene\n",i);
        }
        else printf("Case %ld: Invalid\n",i);
    }
    return 0;
}
