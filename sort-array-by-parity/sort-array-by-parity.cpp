class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int start =0,end = nums.size()-1;
        while(start<end){
            while(nums[start]%2==0 && start<end){
                start++;
            }
            
            while(nums[end]%2==1 && start<end){
                end--;
            }
            
            if(start<end){
                swap(&nums[start],&nums[end]);
                start++;
                end--;
            }
        }
        return nums;
    }
    
    void swap(int *a, int *b){
        int temp = *a;
        *a = *b;
        *b = temp;
    }
};