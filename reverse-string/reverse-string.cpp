class Solution {
public:
    void reverseString(vector<char>& s) {
        int start=0,end=s.size()-1;
        
        while(start<end){
            swapElement(s,start,end);
            start++;
            end--;
        }
    }
    
    void swapElement(vector<char>&s,int i,int j){
        int temp;
        temp = s[i];
        s[i]=s[j];
        s[j]=temp;
    }
    
    
};