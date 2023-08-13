class Solution {
public:
    int solve(vector<int> &nums, int idx, bool flag,int mem[][2]){
        if(idx>=nums.size()) return 0;

        if(idx==nums.size()-1 && flag) return 0;
        if(mem[idx][flag]!=-1) return mem[idx][flag];

        int steal  = idx==0 ? (nums[idx] + solve(nums,idx+2, true,mem)) : (nums[idx] + solve(nums,idx+2, flag,mem));
        int skip = solve(nums,idx+1, flag,mem);

        return mem[idx][flag] = max(steal,skip);
    }
    int rob(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
         int mem[101][2];
        memset(mem, -1, 101*2*sizeof(int));
        return solve(nums,0, false,mem);
    }
};