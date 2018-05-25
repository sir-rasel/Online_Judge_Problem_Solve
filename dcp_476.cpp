#include <stdio.h>
#include <string.h>
int main(){
    int test;
    char a[5];
    scanf("%d",&test);
    while(test--){
        scanf("%s",a);
        if(strcmp(a,"ac")==0 || strcmp(a,"AC")==0){
            printf("Accepted\n");
        }
        else if(strcmp(a,"wa")==0 || strcmp(a,"WA")==0){
            printf("Wrong Answer\n");
        }
        else if(strcmp(a,"rte")==0 || strcmp(a,"RTE")==0){
            printf("Run Time Error\n");
        }
        else if(strcmp(a,"tle")==0 || strcmp(a,"TLE")==0){
            printf("Time Limit Exceeded\n");
        }
    }
    return 0;
}
