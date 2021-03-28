#include <bits/stdc++.h>
using namespace std;

map<pair<int,int>, vector<int> > preResult;

int reverseSortCost(vector<int> num, int n){
    int ans = 0;
    for(int i=0; i<n-1; i++){
        int k = i;
        for(int j=i; j<n; j++){
            if(num[j] == (i+1) ){
                k = j;
                break;
            }
        }

        ans += (k-i+1);
        reverse(num.begin()+i, num.begin()+k+1);
    }

    return ans;
}

void constructResult(){
    vector<int> arr;
    for(int i=1;i<=7;i++){
        arr.push_back(i);

        do {
            int cost = reverseSortCost(arr, i);
            preResult[{i,cost}] = arr;
        } while(next_permutation(arr.begin(),arr.end()));
    }
}

int main(){
    constructResult();
    int test,cs=1;
    scanf("%d",&test);
    while(test--){
        int n,cost;
        scanf("%d %d",&n,&cost);
        printf("Case #%d: ",cs++);

        if(preResult.find({n,cost}) == preResult.end()){
            printf("IMPOSSIBLE\n");
        }
        else {
            vector<int> ans = preResult[{n,cost}];
            int len = ans.size();
            for(int i=0;i<len;i++){
                if(i+1 == len) printf("%d\n",ans[i]);
                else printf("%d ",ans[i]);
            }
        }
    }
    return 0;
}
