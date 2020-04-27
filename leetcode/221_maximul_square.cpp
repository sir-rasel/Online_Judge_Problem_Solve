class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int n = matrix.size();
        if (n == 0) return 0;
        int m = matrix[0].size();

        int maxSide = 0;
        vector<vector<int>> dp(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++) {
            dp[i][0] = (matrix[i][0] == '1' ? 1 : 0);
            maxSide = max(maxSide, dp[i][0]);
        }
        for (int i = 0; i < m; i++) {
            dp[0][i] = (matrix[0][i] == '1' ? 1 : 0);
            maxSide = max(maxSide, dp[0][i]);
        }

        for (int i = 1; i < n; i++) {
            for (int j = 1; j < m; j++) {
                dp[i][j] = (matrix[i][j] == '0' ? 0 : min({dp[i - 1][j - 1], dp[i - 1][j], dp[i][j - 1]}) + 1);
                maxSide = max(maxSide, dp[i][j]);
            }
        }
        return maxSide * maxSide;
    }
};
