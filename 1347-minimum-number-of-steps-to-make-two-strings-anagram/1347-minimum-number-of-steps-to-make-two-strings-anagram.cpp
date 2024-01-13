class Solution {
public:
    int minSteps(string s, string t) {
        int n = s.size();
        int mp_s[26] = {0};
        int mp_t[26] = {0};
        for(int i=0; i<n ;i++){
            mp_s[s[i] - 'a']++;
            mp_t[t[i] - 'a']++;
        }
        int count = 0;
        for(int i=0;i<26;i++){
            if(mp_s[i]>mp_t[i]){
                int value  = mp_s[i] - mp_t[i];
                count += value;
            }
        }
        return count;
        
    }
};