class Solution {
    int dp[35][35];
    int pascalTriangle(int i,int j){
        if(i==j or j==1) return 1;
        if(dp[i][j]!=-1) return dp[i][j];
        return dp[i][j]=pascalTriangle(i-1,j-1) + pascalTriangle(i-1,j);
    }
public:
    vector<int> getRow(int rowIndex) {
        memset(dp,-1,sizeof dp);
        vector<int>ans(rowIndex+1);
        ans[0]=1;
        for(int i=1;i<=rowIndex;i++){
            ans[i]=(pascalTriangle(rowIndex+1,i+1));
        }
        return ans;
    }
};
