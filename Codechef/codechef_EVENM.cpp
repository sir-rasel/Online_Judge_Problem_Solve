#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        int n,c=1;
        scanf("%d",&n);

        int a[n][n];
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                a[i][j] = c++;

        for(int i=0;i<n;i++){
            if(i%2==0){
                for(int j=0;j<n;j++){
                    if(j+1==n) printf("%d",a[i][j]);
                    else printf("%d ",a[i][j]);
                }
            }
            else{
                for(int j=n-1;j>=0;j--){
                    if(j==0) printf("%d",a[i][j]);
                    else printf("%d ",a[i][j]);
                }
            }
            printf("\n");
        }
    }
    return 0;
}
