class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int idx = 0;
        for(int i=0;i<n;){
           const char curr_char = chars[i];
           int count = 0;

           while(i < n && chars[i] == curr_char){
               count++;
               i++;
           }

           chars[idx++] = curr_char;

           if(count > 1){
               for(const char c : to_string(count)){
                   chars[idx++] = c;
               }
           }
        }
        return idx;
    }
};