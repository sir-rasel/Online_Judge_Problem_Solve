#include <stdio.h>
#include <string.h>
int main(){
    char arr[10];
    int i=1;
    while(1){
        scanf("%s",arr);
        if(strcmp(arr,"*")==0) break;
        else if(strcmp(arr,"Hajj")==0) printf("Case %d: Hajj-e-Akbar\n",i);
        else printf("Case %d: Hajj-e-Asghar\n",i);
        i++;
    }
    return 0;
}
