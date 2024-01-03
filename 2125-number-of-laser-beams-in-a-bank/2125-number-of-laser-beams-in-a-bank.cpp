class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int m = bank.size();
        int ans=0;
        int prevCount = 0;

        for(int i=0;i<m;i++){
            int currentCount =0;
            for(char &ch : bank[i]){
                if(ch == '1'){
                    currentCount++;
                }
            }
            ans += (currentCount*prevCount);
            if(currentCount!=0){
                prevCount = currentCount;
            }
        }

        return ans;
    }
};