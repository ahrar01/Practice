class Solution {
public:
    int solve(int idx,int target, vector<int> &nums,vector<vector<int>> &dp){
        if(idx==0){
            if(target==0 and nums[0]==0){
                return 2;
            }
            if(target==0 or nums[0]==target){
                return 1;
            }
            return 0;
        }
        if(dp[idx][target]!=-1) return dp[idx][target];
        int skip = solve(idx-1,target,nums,dp);
        int take = 0;
        if(nums[idx]<=target){
            take = solve(idx-1,target-nums[idx],nums,dp);
        }
        return dp[idx][target]= take+skip;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int sum = 0;
        for(auto &i:nums){
            sum+=i;
        }
        int newTarget = (sum-target)/2;
        if(sum-target<0) return 0;
        if((sum-target)%2==1) return 0;
        int n = nums.size();
        vector<vector<int>> dp(n,vector<int>(newTarget+1,-1));
        return solve(n-1,newTarget,nums,dp);
    }
};