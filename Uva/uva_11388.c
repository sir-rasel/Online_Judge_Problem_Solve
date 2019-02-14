#include <stdio.h>
int main(){
    long long int test,g,l;
    scanf("%lld",&test);
    while(test--){
        scanf("%lld %lld",&g,&l);
        if(l%g==0) printf("%lld %lld\n",g,l);
        else printf("-1\n");
    }
    return 0;
}
