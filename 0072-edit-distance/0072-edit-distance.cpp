class Solution {
public:
    int solve(int i, int j,string &word1, string &word2,vector<vector<int>> & dp){
        if(i<0)return j+1;
        if(j<0) return i+1;
        if(dp[i][j]!=-1) return dp[i][j];

        if(word1[i]==word2[j]){
            return solve(i-1,j-1,word1,word2,dp);
        }else{
            int replaceCharDistance = solve(i-1,j-1,word1,word2,dp);
            int insertCharDistance = solve(i-1,j,word1,word2,dp);
            int deleteCharDistance = solve(i,j-1,word1,word2,dp);

            return dp[i][j] = 1 + min(replaceCharDistance,min(insertCharDistance,deleteCharDistance));
        }
    }
    int minDistance(string word1, string word2) {
        int m = word1.size();
        int n = word2.size();
        vector<vector<int>> dp(m,vector<int>(n,-1));
        return solve(m-1,n-1,word1,word2,dp);
    }
};