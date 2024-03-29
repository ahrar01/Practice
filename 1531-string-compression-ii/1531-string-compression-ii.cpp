class Solution {
public:
     int getLengthOfOptimalCompression(string s, int k) {
        int n = s.length();
        vector<vector<int>> dp(n, vector<int>(k + 1, 101));
        return dfs(0, k, s, dp);
    }

private:
    int dfs(int i, int k, const string& s, vector<vector<int>>& dp) {
        int n = s.length();
        if (i + k >= n) return 0;
        if (k < 0) return 101;
        if (dp[i][k] != 101) return dp[i][k];

        int res = dfs(i + 1, k - 1, s, dp); // Skip this character
        int diff = 0, same = 0, length = 0;

        // For all continuous s[i] characters (can skip k characters)
        for (int j = i; j < n && k - diff >= 0; ++j) {
            if (s[i] == s[j]) {
                ++same;
                if (same <= 2 || same == 10 || same == 100) {
                    ++length;
                }
            } else {
                ++diff;
            }
            res = min(res, length + dfs(j + 1, k - diff, s, dp));
        }

        return (dp[i][k] = res);
    }
};