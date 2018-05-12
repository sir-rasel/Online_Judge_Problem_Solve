#include <stdio.h>
int main(){
    int n;
    long long int i,j;
    scanf("%d",&n);
    while(n--){
        scanf("%lld %lld",&i,&j);
        if(i>j){
            printf(">\n");
        }
        else if(i==j) {
            printf("=\n");
        }
        else {
            printf ("<\n");
        }
    }
    return 0;
}
