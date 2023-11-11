class Solution {
public:
    int maxProduct(vector<int>& nums) {
       priority_queue<int> pq;

       for(auto & num: nums){
           pq.push(num);
       }

       int m = pq.top();
       pq.pop();
       int n = pq.top();
       pq.pop();

       return (m-1) * (n-1);
    }
};