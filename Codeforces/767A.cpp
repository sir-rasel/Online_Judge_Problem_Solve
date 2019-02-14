#include <bits/stdc++.h>
using namespace std;

int arr[1000000];

int main(){
    int test,n;
    scanf("%d",&test);
    n=test;
    for(int i=0;i<test;i++){
        int m;
        scanf("%d",&m);
        arr[m]=1;
        if(arr[n]==1){
            while(arr[n]==1){
                printf("%d ",n);
                n--;
            }
            printf("\n");
        }
        else printf("\n");
    }
    return 0;
}

