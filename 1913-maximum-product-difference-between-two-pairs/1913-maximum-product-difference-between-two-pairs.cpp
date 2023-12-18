class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        priority_queue<int> pq;
        priority_queue<int, vector<int>, greater<int>> gq;
        for(auto num:nums){
            pq.push(num);
        }
         for(auto num:nums){
            gq.push(num);
        }
        int a = pq.top();
        pq.pop();
        int b = pq.top();
        pq.pop();
        int c = gq.top();
        gq.pop();
        int d = gq.top();
        return (a*b)-(c*d);

    }
};