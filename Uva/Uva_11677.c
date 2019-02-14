#include <stdio.h>
int main(){
    int h1,m1,h2,m2,min;
    while(scanf("%d %d %d %d",&h1,&m1,&h2,&m2)){
        if(h1==0 && m1==0 && h2==0 && m2==0) return 0;
        min=0;
        if(m2<m1){
            min+=(m2+60)-m1;
            h1++;
        }
        else{
            min+=m2-m1;
        }
        if(h2<h1) h2+=24;
        min+=(h2-h1)*60;
        printf("%d\n",min);
    }
    return 0;
}
