class Solution {
public:
    
    vector<int> usingHashSet(vector<int>& nums){
        unordered_set<int> set(begin(nums),end(nums));
        vector<int> ans(size(nums) - size(set));
        for(int i=1,j=0;i<=nums.size();i++){
            if(!set.count(i)){
                ans[j++]=i;
            }
        }
        return ans;
    }
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        return usingHashSet(nums);
    }
};