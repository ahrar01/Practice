class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int countOne=0, countTwo = 0;
        int majOne=NULL,majTwo=NULL;
        for(int i=0;i<n;i++){

            if(majOne == nums[i]){
                countOne++;
            }else if(majTwo == nums[i]){
                countTwo++;
            }else if(countOne == 0){
                majOne = nums[i];
                countOne = 1;
            }else if(countTwo == 0){
                majTwo = nums[i];
                countTwo = 1;
            }else{
                countOne--;
                countTwo--;
            }
        }

        vector<int> ans;
        int freq1 = 0;
        int freq2 = 0;
        for(int &num : nums){
            if(majOne == num){
                freq1++;
            }else if(majTwo == num){
                freq2++;
            }
        }

        if(freq1>floor(n/3)){
            ans.push_back(majOne);
        }

        if(freq2>floor(n/3)){
            ans.push_back(majTwo);
        }
        return ans;
    }
};