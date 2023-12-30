class Solution {
public:
    bool makeEqual(vector<string>& words) {
        int n = words.size();
        unordered_map<char,int> count;

        for(string &word : words){
            for(char &c : word){
                count[c]++;
            }
        }

        for(auto &it : count){
            if(it.second % n != 0){
                return false;
            }
        }

        return true;
    }
};