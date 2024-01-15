class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        int n = matches.size();
        unordered_map<int,int> winnerCount;
        unordered_map<int,int> looserCount;

        for(auto &match:matches){
            winnerCount[match[0]]++;
            looserCount[match[1]]++;
        }

        vector<int> winner;
        vector<int> looser;

        for(auto it:winnerCount){
            if(it.second >= 1 && looserCount.find(it.first)==looserCount.end()){
                winner.push_back(it.first);
            }
        }

        for(auto it:looserCount){
            if(it.second == 1){
                looser.push_back(it.first);
            }
        }
        sort(begin(winner),end(winner));
        sort(begin(looser),end(looser));

        return {winner,looser};
    }
};