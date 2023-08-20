class Solution {
public:
    int n;
    int solve(vector<int>& coins,int idx,int amount,vector<vector<int>> & dp){
        if(idx==0){
            if(amount%coins[0]==0) return amount/coins[0];
            else return 1e9;
        }
        if(dp[idx][amount]!=-1) return dp[idx][amount];

        int skip = 0 +solve(coins,idx-1,amount,dp);
        int take = 1e9;
        if(coins[idx]<=amount){
            take = 1+ solve(coins,idx,amount-coins[idx],dp);
        }
        return dp[idx][amount]=  min(take,skip);

    }
    int coinChange(vector<int>& coins, int amount) {
        n = coins.size();
        vector<vector<int>> dp(n,vector<int>(amount+1,-1));
        int ans =  solve(coins,n-1,amount,dp);
        if(ans>=1e9) return -1;
        return ans;
    }
};