class Solution {
public:
    int minimumAddedCoins(vector<int>& coins, int target) {   
        sort(coins.begin(),coins.end());
        int max_reachable = 0;
        int coins_to_add = 0;
        
        for(auto coin: coins){
            while(max_reachable<target && max_reachable+1<coin){
                max_reachable+= max_reachable+1;
                coins_to_add+=1;
            }
            if(max_reachable>=target){
                break;
            }
            max_reachable+=coin;
        }
        while(max_reachable<target){
            max_reachable+= max_reachable+1;
            coins_to_add+=1;
        }
        return coins_to_add;        
    }
};