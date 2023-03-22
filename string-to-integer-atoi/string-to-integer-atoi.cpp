class Solution {
public:

    int helper(string input,int sign,int start,long result){
        //check for base condition
        if(sign*result>=INT_MAX){
            return INT_MAX;
        }
        if(sign*result<=INT_MIN){
            return INT_MIN;
        }
        if(start>=input.size() || input[start]<'0' || input[start]>'9'){
            return sign*result;
        }
        
        return helper(input,sign,start+1,(result*10+(input[start]-'0')));
        
    }

    int myAtoi(string s) {
        int start=0, size = s.size(), sign = 1;
        while(start<size && s[start] == ' '){
            ++start;
        }
        if(s[start] == '-'){
            sign = -1;
            ++start;
        }else if(s[start]=='+'){
            ++start;
        }
        
      return helper(s,sign,start,0);
    }
};