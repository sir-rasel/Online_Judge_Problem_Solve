#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
int arr[55][55];

bool checkDiagonalSum(int n,int k){
    int sum=0;
    for(int i=0;i<n;i++) sum+=arr[i][i];
    return sum==k;
}

bool checkNatural(int n){
    map<int,bool>checkRow,checkColumn;
    for(int i=0;i<n;i++){
        checkRow.clear(),checkColumn.clear();
        for(int j=0;j<n;j++){
            if(checkRow.count(arr[i][j])!=0) return false;
            else checkRow[arr[i][j]]=true;
            if(checkColumn.count(arr[j][i])!=0) return false;
            else checkRow[arr[j][i]]=true;
        }
    }
    return true;
}

int main(){
    int test,cs=1;
    scanf("%d",&test);
    while(test--){
        int n,k;
        scanf("%d %d",&n,&k);
        vector<int>ans(n*n);

        for(int i=1;i<=n*n;i++) {
            if(i%n==0) ans[i-1]=n;
            else ans[i-1]=i%n;
        }


        bool flag;
        do{
            int idx = 0;
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    arr[i][j]=ans[idx++];
                }
            }
            flag = checkDiagonalSum(n,k);
            if(flag) flag = checkNatural(n);
            if(flag) break;
        }while(next_permutation(ans.begin(),ans.end()));

        printf("Case #%d: ",cs++);
        if(!flag) printf("IMPOSSIBLE\n");
        else{
            printf("POSSIBLE\n");
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(j+1==n) printf("%d",arr[i][j]);
                    else printf("%d ",arr[i][j]);
                }
                printf("\n");
            }
        }
    }
    return 0;
}
