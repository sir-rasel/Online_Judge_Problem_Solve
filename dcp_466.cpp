#include <stdio.h>
#include <string.h>
int main(){
    int test;
    char a[15],b[15];
    scanf("%d",&test);
    while(test--){
        scanf("%s %s",a,b);
        if((strcmp(a,"Dhaka")==0 && strcmp(b,"Chittagong")==0) || (strcmp(a,"Chittagong")==0 && strcmp(b,"Dhaka")==0)){
            printf("200\n");
        }
        else if((strcmp(a,"Dhaka")==0 && strcmp(b,"Rajshahi")==0) || (strcmp(a,"Rajshahi")==0 && strcmp(b,"Dhaka")==0)){
            printf("300\n");
        }
        else if((strcmp(a,"Dhaka")==0 && strcmp(b,"Kathmandu")==0) || (strcmp(a,"Kathmandu")==0 && strcmp(b,"Dhaka")==0)){
            printf("3200\n");
        }
        else if((strcmp(a,"Dhaka")==0 && strcmp(b,"Butwal")==0) || (strcmp(a,"Butwal")==0 && strcmp(b,"Dhaka")==0)){
            printf("8200\n");
        }

        else if((strcmp(a,"Rajshahi")==0 && strcmp(b,"Chittagong")==0) || (strcmp(a,"Chittagong")==0 && strcmp(b,"Rajshahi")==0)){
            printf("500\n");
        }
        else if((strcmp(a,"Rajshahi")==0 && strcmp(b,"Kathmandu")==0) || (strcmp(a,"Kathmandu")==0 && strcmp(b,"Rajshahi")==0)){
            printf("3500\n");
        }
        else if((strcmp(a,"Rajshahi")==0 && strcmp(b,"Butwal")==0) || (strcmp(a,"Butwal")==0 && strcmp(b,"Rajshahi")==0)){
            printf("8500\n");
        }

        else if((strcmp(a,"Chittagong")==0 && strcmp(b,"Kathmandu")==0) || (strcmp(a,"Kathmandu")==0 && strcmp(b,"Chittagong")==0)){
            printf("3000\n");
        }
        else if((strcmp(a,"Chittagong")==0 && strcmp(b,"Butwal")==0) || (strcmp(a,"Butwal")==0 && strcmp(b,"Chittagong")==0)){
            printf("8000\n");
        }

        else if((strcmp(a,"Kathmandu")==0 && strcmp(b,"Butwal")==0) || (strcmp(a,"Butwal")==0 && strcmp(b,"Kathmandu")==0)){
            printf("11000\n");
        }
    }
    return 0;
}
