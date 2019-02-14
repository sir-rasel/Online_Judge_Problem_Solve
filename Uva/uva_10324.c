#include <stdio.h>
int main(){
    char arr[1000002];
    int i,j,count=0,test,k=0,l;
    while(scanf("%s",arr)!=EOF){
        scanf("%d",&test);
        if(count==k) {
                printf("Case %d:\n",++count);
        }
        while(test--){
            scanf("%d %d",&i,&j);
            if(i>j){
                i=i+j;
                j=i-j;
                i=i-j;
            }
            for(i;i<j;i++)
                if(arr[i]!=arr[i+1]){
                    break;
                }
            if(i<j) printf("No\n");
            else printf("Yes\n");
        }
        k++;
    }
    return 0;
}
