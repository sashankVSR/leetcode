class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();

        vector<vector<long long>> dp(m, vector<long long>(n, 0));

        // If starting cell has obstacle
        if (obstacleGrid[0][0] == 1)
            return 0;

        dp[0][0] = 1;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {

                // Skip starting cell
                if (i == 0 && j == 0)
                    continue;

                // If obstacle, no path
                if (obstacleGrid[i][j] == 1) {
                    dp[i][j] = 0;
                } else {
                    long long up = 0, left = 0;

                    if (i > 0)
                        up = dp[i - 1][j];

                    if (j > 0)
                        left = dp[i][j - 1];

                    dp[i][j] = up + left;
                }
            }
        }

        return dp[m - 1][n - 1];
    }
};
