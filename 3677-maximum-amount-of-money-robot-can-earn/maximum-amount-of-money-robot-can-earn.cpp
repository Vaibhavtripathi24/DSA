class Solution {
public:
    int m, n;
    vector<vector<int>> coins;
    int dp[501][501][3];
    int dfs(int i, int j, int k) {
        if (i >= m || j >= n) return INT_MIN / 2;
        if (dp[i][j][k] != INT_MIN) return dp[i][j][k];
        if (i == m - 1 && j == n - 1) {
            if (k > 0) return max(0, coins[i][j]);
            return coins[i][j];
        }
        int ans = coins[i][j] + max(dfs(i + 1, j, k), dfs(i, j + 1, k));
        if (coins[i][j] < 0 && k > 0) {
            ans = max(ans, max(dfs(i + 1, j, k - 1), dfs(i, j + 1, k - 1)));
        }
        return dp[i][j][k] = ans;
    }
    int maximumAmount(vector<vector<int>>& grid) {
        coins = grid;
        m = coins.size();
        n = coins[0].size();

        for (int i = 0; i < 501; i++)
            for (int j = 0; j < 501; j++)
                for (int k = 0; k < 3; k++)
                    dp[i][j][k] = INT_MIN;

        return dfs(0, 0, 2);
    }
};