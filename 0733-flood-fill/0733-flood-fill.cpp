class Solution {
public:
    vector<vector<int>> direction = {{0,1},{1,0},{0,-1},{-1,0}};
    void dfs(int sr,int sc,vector<vector<int>>& ans,vector<vector<int>>& image,int color,int iniColor){
        ans[sr][sc] = color;
        int n = image.size();
        int m = image[0].size();
        for(auto &dir:direction){
            int _sr = sr + dir[0];
            int _sc = sc + dir[1];
            if(_sr>=0 && _sr<n && _sc>=0 && _sc<m && ans[_sr][_sc] == iniColor && ans[_sr][_sc]!=color){
                dfs(_sr,_sc,ans,image,color,iniColor);
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int iniColor = image[sr][sc];
        vector<vector<int>> ans = image;
        dfs(sr,sc,ans,image,color,iniColor);
        return ans;
    }
};