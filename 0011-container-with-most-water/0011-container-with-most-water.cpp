class Solution {
public:
    int maxArea(vector<int>& height) {
        int start = 0;
        int end = height.size()-1;
        int area = 0;

        for(int i = start;start<end;i++){
            int length = min(height[start],height[end]);
            int width = end - start;
            area = max(area,length*width);
            if(height[start]>height[end]){
                end--;
            }else{
                start++;
            }
        }
        return area;
    }
};