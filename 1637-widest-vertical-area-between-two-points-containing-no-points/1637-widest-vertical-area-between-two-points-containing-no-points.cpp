class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        int n = points.size();
        sort(points.begin(),points.end());
        int maxArea = INT_MIN;
        for(int i=0;i<n-1;i++){
            int width = points[i+1][0]-points[i][0];
            if(width > maxArea){
                maxArea = max(maxArea,width);
            }
        }
        return maxArea;
    }
};