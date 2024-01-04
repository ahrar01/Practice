class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int> mp;

        for(auto &num:nums){
            mp[num]++;
        }
        int ans = 0;
        for(auto &it : mp){
            int freq = it.second;

            if(freq == 1){
                return -1;
            }

            ans += ceil((double)freq/3);
        }
        return ans;
    }
};