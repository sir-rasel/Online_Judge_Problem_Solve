#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    int test,cs=1;
    scanf("%d",&test);
    while(test--){
        int n;
        scanf("%d",&n);
        int arr[n+5][n+5];

        int trace=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                scanf("%d",&arr[i][j]);
                if(i==j) trace+=arr[i][j];
            }
        }

        int k=0,c=0;
        map<int,bool>checkRow,checkColumn;
        for(int i=0;i<n;i++){
            checkRow.clear(),checkColumn.clear();
            bool rowFlag=true,columnFlag=true;
            for(int j=0;j<n;j++){
                if(checkRow.count(arr[i][j])!=0 and rowFlag) k++,rowFlag=false;
                checkRow[arr[i][j]]=true;

                if(checkColumn.count(arr[j][i])!=0 and columnFlag) c++,columnFlag=false;
                checkColumn[arr[j][i]]=true;
            }
        }

        printf("Case #%d: %d %d %d\n",cs++,trace,k,c);
    }
    return 0;
}
