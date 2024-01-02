class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        int n = nums.size();

        unordered_map<int,int> map;

        vector<vector<int>> ans;

        for(int i=0;i<n; i++){
            int freq = map[nums[i]];

            if(freq == ans.size()){
                ans.push_back({});
            }
            ans[freq].push_back(nums[i]);
            map[nums[i]]++;
        }
        return ans;
    }
};