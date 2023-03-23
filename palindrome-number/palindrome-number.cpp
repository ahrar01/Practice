class Solution {
public:
    int reverse(int n){
        long rev=0;
        while(n){
            int remainder = n%10;
            if(rev>INT_MAX/10 || rev<INT_MIN/10){
                return 0;
            }
            rev = rev*10+remainder;
            n/=10;
        }
        return int(rev);
    }
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        return x==reverse(x);
    }
};