#include<bits/stdc++.h>
using namespace std;

void print(){
    printf("2 2\n");
    printf("1 3\n");
    printf("3 1\n");
    printf("4 2\n");
    printf("5 1\n");
    printf("1 5\n");
    printf("2 6\n");
    printf("1 7\n");
    printf("7 1\n");
    printf("8 2\n");
    printf("2 8\n");
    printf("3 7\n");
    printf("4 8\n");
    printf("8 4\n");
    printf("7 5\n");
    printf("8 6\n");
    printf("6 8\n");
    printf("7 7\n");
    printf("8 8\n");
}

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        int r,c;
        scanf("%d %d",&r,&c);
        if(r==1 and c==1){
            printf("%d\n",19);
            print();
        }
        else if(r==c){
            printf("%d\n",20);
            printf("1 1\n");
            print();
        }
        else{
            printf("%d\n",21);
            int h = max(r,c);
            int l = min(r,c);
            int fac = (h-l)/2;
            printf("%d %d\n",h-fac,l+fac);
            printf("1 1\n");
            print();
        }
    }
    return 0;
}
