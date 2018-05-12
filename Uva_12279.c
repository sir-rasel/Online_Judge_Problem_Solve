#include <stdio.h>
int main(){
    int n,i,num,treat,cas=1;
    while(scanf("%d",&n) && n!=0){
            treat=0;
        for(i=0;i<n;i++){
            scanf("%d",&num);
            if(num==0) treat--;
            else treat++;
        }
        printf("Case %d: %d\n",cas,treat);
        cas++;
    }
    return 0;
}
