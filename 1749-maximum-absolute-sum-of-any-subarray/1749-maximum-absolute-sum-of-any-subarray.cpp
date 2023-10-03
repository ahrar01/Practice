class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int maxi = INT_MIN;
        int mini = INT_MAX;
        int curMaxSum = 0;
        int curMinSum = 0;

        for(int i=0;i<nums.size();i++){
            curMaxSum += nums[i];
            curMinSum += nums[i];
            maxi = max(curMaxSum,maxi);
            mini = min(curMinSum,mini);

            if(curMaxSum<0){
                curMaxSum = 0;
            }
            if(curMinSum>=0){
                curMinSum = 0;
            }
        }
        return max(maxi,abs(mini));
    }

};