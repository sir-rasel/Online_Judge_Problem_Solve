#include<bits/stdc++.h>
using namespace std;

const int maxx = 2e5+5;
vector<int>arr(maxx);
map<int,bool>isSum;
map<int,pair<int,int> >idx;
bool flag = false;

int main(){
    int k;
    scanf("%d",&k);
    for(int i=1;i<=k;i++){
        int n;
        scanf("%d",&n);
        int sum = 0;
        for(int j=1;j<=n;j++){
            scanf("%d",&arr[j]);
            sum+=arr[j];
        }
        for(int j=1;j<=n;j++){
            int temp = sum-arr[j];
            if(isSum[temp] and idx[temp].first!=i and !flag){
                printf("YES\n%d %d\n%d %d\n",idx[temp].first,idx[temp].second,i,j);
                flag=true;
            }
            else{
                isSum[temp] = true;
                idx[temp] = {i,j};
            }
        }
    }
    if(!flag) printf("NO\n");
    return 0;
}
