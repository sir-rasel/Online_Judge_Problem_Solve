#include <stdio.h>
#include <math.h>
#define size 10000000
char ara[size];
int main(){
    sieve();
    int test,n,i,count;
    scanf("%d",&test);
    while(test--){
        scanf("%d",&n);
        count=0;
        for(i=2;i<=size;i++){
            if(ara[i]=='1') count++;
            if(count==n){
                printf("%d\n",i);
                break;
            }
        }
    }
    return 0;
}
void sieve(){
     int i, j, root;
     for(i = 2; i < size; i++) {
         ara[i] = '1';
     }
     root = sqrt(size);
     for(i = 2; i <= root; i++) {
         if(ara[i] == '1') {
             for(j = i; i * j <= size; j++) {
                 ara[i * j] = '0';
             }
         }
     }
 }
