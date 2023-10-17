class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> subs = {{}};

        for(auto num :nums){
            int n = subs.size();
            for(int k=0;k<n;k++){
                subs.push_back(subs[k]);
                subs.back().push_back(num);
            }
        }
        return subs;
    }
};