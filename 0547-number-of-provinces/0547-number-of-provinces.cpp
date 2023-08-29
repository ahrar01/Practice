class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        if(n==0) return n;
        vector<bool> vis(n,false);
        int count = 0;
        for(int i=0;i<n;i++){
            if(vis[i]) continue;
            count++;
            queue<int> q;
            q.push(i);
            while(!q.empty()){
                int node = q.front();
                q.pop();
                vis[node] = true;
                for(int j=0;j<isConnected[node].size();j++){
                    if(!vis[j] && isConnected[node][j]==1){
                        q.push(j);
                        vis[j] = true;
                    }
                }
            }
        }
        return count;
    }
};