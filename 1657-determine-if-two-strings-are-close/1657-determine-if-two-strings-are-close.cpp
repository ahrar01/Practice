class Solution {
public:
    bool closeStrings(string word1, string word2) {
       
        int n = word1.size();
        int m = word2.size();
        if(m!=n) return false;
        vector<int> freq_one(26,0);
        vector<int> freq_two(26,0);
        for(int i=0;i<n;i++){
            freq_one[word1[i]-'a']++;
            freq_two[word2[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(freq_one[i] != 0 && freq_two[i] !=0)continue;
            if(freq_one[i] == 0 && freq_two[i] ==0)continue;
            return false;
        }
        sort(begin(freq_one),end(freq_one));
        sort(begin(freq_two),end(freq_two));

        return freq_one == freq_two;
    }
};