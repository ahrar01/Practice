class Solution {
public:
    int calDistance(vector<int> &p1, vector<int> &p2){
        int dx = abs(p1[0]-p2[0]);
        int dy = abs(p1[1]-p2[1]);

        return max(dx,dy);
    }
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int minTime = 0;
        int n = points.size();

        for(int i=1; i<n;i++){
            minTime += calDistance(points[i-1],points[i]);
        }

        return minTime;
    }
};