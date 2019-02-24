#include<bits/stdc++.h>
using namespace std;

int main(){
    int num;
    scanf("%d",&num);
    for(int i=0;i<num;i++){
        for(int j=num-1;j>i;j--) printf(" ");
        for(int j=0;j<=i;j++){
            if(j!=i) printf("* ");
            else printf("*");
        }
        printf("\n");
    }
    return 0;
}
