#include <stdio.h>
int main(){
    char a[4];
    int d,h,m,s,start,end,temp;
    scanf("%s%d",a,&d);
    scanf("%d : %d : %d",&h,&m,&s);
    start=s+m*60+h*60*60+d*24*60*60;
    scanf("%s%d",a,&d);
    scanf("%d : %d : %d",&h,&m,&s);
    end=s+m*60+h*60*60+d*24*60*60;
    temp=end-start;
    d = temp / 86400;
    temp = temp % 86400;
    h = temp / 3600;
    temp = temp % 3600;
    m = temp / 60;
    s = temp % 60;
    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",d,h,m,s);
    return 0;
}
