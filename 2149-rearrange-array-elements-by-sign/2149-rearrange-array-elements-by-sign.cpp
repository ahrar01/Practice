class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> arrP;
        vector<int> arrN;
        vector<int> ans;
        for(auto num:nums){
            if(num>0){
                arrP.push_back(num);
            }else{
                arrN.push_back(num);
            }
        }
        for(int i=0;i<arrN.size();i++){
            ans.push_back(arrP[i]);
            ans.push_back(arrN[i]);
        }
        return ans;
    }
};