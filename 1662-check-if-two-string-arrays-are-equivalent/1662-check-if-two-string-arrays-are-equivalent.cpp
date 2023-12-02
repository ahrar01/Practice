class Solution {
public:
    string makeString(vector<string>& word){
        string str = "";

        for(auto &s:word){
            str+=s;
        }
        return str;
    }
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string str1 = makeString(word1);
        string str2 = makeString(word2);

        if(str1.length() != str2.length()) return false;

        for(int i=0;i<str1.length();i++){
            if(str1[i]!=str2[i]) return false;
        }
        return true;
    }
};