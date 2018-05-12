#include <stdio.h>
int main(){
   int test,n;
   scanf("%d",&test);
   while(test--){
      scanf("%d",&n);
      if(n==0) printf("%d %d\n",0,0);
      else if(n>10) printf("%d %d\n",10,n-10);
      else printf("%d %d\n",1,n-1);
   }
   return 0;
}
