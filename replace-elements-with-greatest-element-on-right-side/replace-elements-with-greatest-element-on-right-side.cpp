class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {

        int mx=-1,temp;
        for(int i=arr.size()-1;i>=0;i--){
           temp=arr[i];
           arr[i]=mx;
           mx = max(temp,arr[i]);
        }
        return arr;
    }
};