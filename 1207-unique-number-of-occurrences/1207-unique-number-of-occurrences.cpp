class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> mp;

        for(auto &num:arr){
            mp[num]++;
        }
        unordered_set<int> s;
        for(auto it:mp){
            int freq = it.second;
            if(s.find(freq) != s.end()) return false;
            else{
                s.insert(freq);
            }
        }
        return true;
    }
};