#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    int n;
    scanf("%d",&n);

    if(n<=3){
        printf("NO SOLUTION\n");
        return 0;
    }

    int arr[n][n] = {0};
    for(int i=0;i<n;i++){
        for(int j=n-i-1;j>=0;j--){
            if(i!=0 and j==n-i-1) arr[i][j]=2;
            else arr[i][j] = 1;
        }
    }

    int v = 2;
    int c = 1;
    for(int i=1;i<n;i++){
        int r = c;
        for(int j=n-1;j>=i;j--){
            if(j==i and j!=r) arr[r++][j]=v+1;
            else arr[r++][j]=v;
        }
        v++;
        c++;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
