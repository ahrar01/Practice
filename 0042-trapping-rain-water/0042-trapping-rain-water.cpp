class Solution {
public:
    int trap(vector<int>& height) {
        int total = 0;

        int n = height.size();
        int start = 0;
        int end = n-1;
        int maxR = 0;
        int maxL = 0; 
        for(int i=start;start<end;i++){
            if(height[start]<=height[end]){
                if(height[start]>=maxL){
                    maxL = height[start];
                }else{
                    int water = maxL-height[start];
                    if(water>=0){
                        total+=water;
                    }
                }
                start++;
            }else{
                if(height[end]>=maxR){
                    maxR = height[end];
                }else{
                    int water = maxR - height[end];
                     if(water>=0){
                        total+=water;
                    }
                }
                end--;
            }
        }
        return total;
    }
};