#include <stdio.h>
#include <math.h>

double arr[262144];

int main(){
    int i=0;
    unsigned long long int a;
    while(scanf("%lld",&a)!=EOF){
        arr[i]=(double)sqrt(a*1.0);
        i++;
    }
    for(i--;i>=0;i--){
        printf("%.4lf\n",arr[i]);
    }
    return 0;
}
