class Solution {
public:
    int n;
    long solve(int idx, int amount, vector<int>& coins, vector<vector<long>> &dp){
       if(idx==0){
           if(amount%coins[0]==0){
               return 1;
           }else{
               return 0;
           }
       }

       if(dp[idx][amount]!=-1) return dp[idx][amount];

        int skip = solve(idx-1,amount,coins,dp);
        int take = 0;

        if(coins[idx]<=amount){
            take = solve(idx,amount-coins[idx],coins,dp);
        }
        
        return dp[idx][amount] = take+skip;

    }
    int change(int amount, vector<int>& coins) {
        n = coins.size();
        vector<vector<long>> dp(n,vector<long>(amount+1,-1));
        return solve(n-1,amount,coins,dp);
    }
};