class Solution {
public:
    int solve(vector<int> cost, int n,vector<int> &mem){
        if(n<=1) return mem[n] = 0;
        if(n==2) return mem[n] = min(cost[0],cost[1]);
        if(mem[n]!=-1) return mem[n];
        return mem[n] = min(solve(cost,n-1,mem)+cost[n-1], solve(cost,n-2,mem)+cost[n-2]);
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> dp(n+1,-1);
        return solve(cost,n,dp);
    }
};