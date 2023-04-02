class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product =1;
        int zeroCount = count(begin(nums),end(nums),0);
        
        if(zeroCount > 1) return vector<int>(size(nums));
        
        for(auto c:nums){
            if(c){
                product*=c;
            }
        }

        for(auto& c:nums){
            if(zeroCount>0){
                c = c ? 0 : product;
            }else{
                c = product/c;
            }
        }
        return nums;
    }
};