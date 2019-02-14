#include <stdio.h>
int bubble_sort(int a[],int n);
int main(){
    int arr[1001],i,n,num;
    while(scanf("%d",&n)!=EOF){
        for(i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        num=bubble_sort(arr,n);
        printf("Minimum exchange operations : %d\n",num);
    }
    return 0;
}
int bubble_sort(int a[],int n){
    int i,j,temp,flag=0;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                flag++;
            }
        }
        if(flag==0) return flag;
    }
    return flag;
}
