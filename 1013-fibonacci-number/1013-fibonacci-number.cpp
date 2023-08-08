class Solution {
public:
   
    int fib(int n) {
       int a =0 , b=1;
       for(int i=2;i<=n;i++){
           int curr = a+b;
           a = b;
           b = curr;
       }
       return b;
    }
};