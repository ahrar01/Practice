class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        priority_queue<int,vector<int>,greater<int>> pq;
        for(auto &num: prices){
            pq.push(num);
        }
        int minPrice = pq.top();
        pq.pop();
        int secondMinPrice = pq.top();
        int remainingMoney = money - minPrice - secondMinPrice;
        return remainingMoney >= 0 ? remainingMoney : money;
    }
};