class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      if (nums.empty()){
          return 0;
      }

    int nextPointer = 1;
    
    for(int i=1;i<nums.size();i++){
        if(nums[nextPointer-1]!=nums[i]){
            nums[nextPointer]=nums[i];
            nextPointer++;
        }
    }
    return nextPointer;
    }
};