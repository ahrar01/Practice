class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int i=1;
        if(arr.size()<3){
            return false;
        }
        
        while(i<arr.size()){
            if( arr[i-1]<arr[i]){
              i++;
            }else break;
        }
        if(i==arr.size()||i==1) return false;
        while(i<arr.size()){
            if(arr[i-1]>arr[i]){
                i++;
            }else break;
        }
        if(i==arr.size()){
            return true;
        }else { 
            return false;
        }
    }
};