class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int n = s.size();
        unordered_map<char,int> map;
        int maxLength = INT_MIN;
        for(int i=0;i<n;i++){
            if(map.find(s[i])!=map.end()){
                maxLength = max(maxLength,i-map[s[i]]);
            }else{
                map[s[i]] = i;
            }
        }

        return maxLength<0 ? -1 : maxLength-1;
    }
};