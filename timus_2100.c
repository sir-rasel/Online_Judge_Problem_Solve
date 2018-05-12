#include <stdio.h>
#include <string.h>
int main(){
    int n,count=0;
    char name[30];
    scanf("%d",&n);
    while(n--){
        scanf("%s",name);
        if(strstr(name,"+one")) count+=2;
        else count++;
    }
    count=count+2;
    if(count==13) count=count*100+100;
    else count=count*100;
    printf("%d\n",count);
}
