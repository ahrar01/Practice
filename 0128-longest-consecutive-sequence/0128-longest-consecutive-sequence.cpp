class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
        sort(nums.begin(),nums.end());
        int lastSmaller = INT_MIN;
        int longest = 1;
        int count = 0;

        for(auto &num :nums){
            if(lastSmaller == num-1){
                count++;
                lastSmaller = num;
            }else if(lastSmaller !=num){
                count=1;
                lastSmaller = num;
            }
            longest = max(longest,count);
        }

        return longest;
    }
};