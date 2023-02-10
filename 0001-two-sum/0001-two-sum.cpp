class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> map;
        for(int i=0;i<nums.size();i++){
            int numberToFind = target- nums[i];
            
            if(map.find(numberToFind)!= map.end()){
                return {map[numberToFind],i};
            }
            
            map[nums[i]] = i;
            
        }
        return {};
    }
};