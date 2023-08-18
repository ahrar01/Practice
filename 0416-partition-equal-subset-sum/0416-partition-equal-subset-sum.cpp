class Solution {
public:
    bool solve(int ind, int target, vector<int>& nums,vector<vector<int>> &dp){
        if(dp[ind][target]!=-1) return dp[ind][target];
        
        if(target==0) return true;
        
        if(ind==0) return nums[ind]==target;
        bool notTaken = solve(ind-1,target,nums,dp);

        bool taken  = false;

        if(nums[ind]<=target){
            taken = solve(ind-1,target-nums[ind],nums,dp);
        }

        return dp[ind][target] =  taken || notTaken;
    }
    bool canPartition(vector<int>& nums) {

        int sum = 0;

        for(auto i:nums){
            sum+= i;
        }
        if(sum%2!=0){
            return false;
        }

        int n = nums.size();
        vector<vector<int>> dp(n,vector<int>(sum/2+1,-1));
        return solve(n-1,sum/2,nums,dp);
        
    }
};