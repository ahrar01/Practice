class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> result(nums.size());
        int l=0,r=nums.size()-1;        
        for(int i=nums.size()-1;i>=0;i--){
            if(abs(nums[l])>abs(nums[r])){
                result[i]=nums[l]*nums[l++];
            }else{
                result[i]=nums[r]*nums[r--];
            }
        }
        return result;
    }
    
};