class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int n = text1.size();
        int m = text2.size();

        int arr[n+1][m+1];
        for(int i=n-1;i>=0;i--) arr[i][m]=0;
        for(int j=m-1;j>=0;j--) arr[n][j]=0;

        for(int i=n-1;i>=0;i--){
            for(int j=m-1;j>=0;j--){
                if(text1[i]==text2[j]) arr[i][j] = 1+arr[i+1][j+1];
                else arr[i][j] = max(arr[i+1][j],arr[i][j+1]);
            }
        }
        return arr[0][0];
    }
};
