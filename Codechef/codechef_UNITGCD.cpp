#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;
ll mod = 1000000007;

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        int n;
        scanf("%d",&n);
        int day = n/2;
        if(n==1) day = 1;
        vector<int>arr[day];
        for(int i=1,j=0;i<=n;i+=2,j++){
            int idx = (j%day);
            arr[idx].push_back(i);
        }
        for(int i=2,j=0;i<=n;i+=2,j++){
            int idx = (j%day);
            arr[idx].push_back(i);
        }
        for(int i=0;i<day;i++) sort(arr[i].begin(),arr[i].end());

        printf("%d\n",day);
        for(int i=0;i<day;i++){
            printf("%d ",arr[i].size());
            for(int j=0;j<arr[i].size();j++){
                if(j+1==arr[i].size()) printf("%d",arr[i][j]);
                else printf("%d ",arr[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
