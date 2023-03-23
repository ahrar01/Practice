class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        if(digits.empty())
            return {};
        
        vector<int> res;
        
        int n = digits.size();
        int sum =0, carry=1;
        for(int i=n-1; i >= 0 ; i--){
            
            sum = carry + digits[i];
            
            carry = (sum >= 10) ? 1 : 0;
            
            // inserting one by one at front
            res.insert(res.begin(), (sum%10));
            
            
        }
        if(carry)
            res.insert(res.begin(),1);
        
        return res;
    }
};