class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map <int,int> count;
        for(auto &num : nums){
            count[num]++;
        }
        vector<vector<int>> bucket(n+1);
        for(auto it:count){
            bucket[it.second].push_back(it.first);
        }
        vector<int> ans;
        for(int i=bucket.size()-1; i>=0 && ans.size()<k;i--){
            if(k==0) return ans;
            for(auto buc:bucket[i]){
                ans.push_back(buc);
                if(ans.size()==k) break;
            }
        }
        return ans;
    }
};