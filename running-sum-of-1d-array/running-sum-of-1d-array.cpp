class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> sumArr;
        int sum = 0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            sumArr.push_back(sum);
        }
        return sumArr;
    }
};