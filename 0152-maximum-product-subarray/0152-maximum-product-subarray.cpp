class Solution {
public:
    int maxProduct(vector<int>& nums) {
    long long prod = 1; // maximum product
    long long prod_maxi = LONG_MIN; // maximum sum

    for(int i=0;i<nums.size();i++){
        prod *= nums[i];
        prod_maxi = max(prod,prod_maxi);
        if(prod==0){
            prod = 1;
        }
    }
    prod = 1;
    for(int i=nums.size()-1;i>=0;i--){
        prod *= nums[i];
        prod_maxi = max(prod,prod_maxi);
        if(prod==0){
            prod = 1;
        }
    }
    return prod_maxi;
    }
};