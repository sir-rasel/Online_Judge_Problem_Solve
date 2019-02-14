#include <stdio.h>
int main(){
    char arr[100];
    while(gets(arr) && arr!=EOF){
        printf("%s\n",arr);
    }
    return 0;
}
