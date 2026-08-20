// User function Template for C++
class Solution {
  public:
    bool armstrongNumber(int n) {
        // code here
        int original;
        if(n<0){
            n = n * -1;
        }
        original = n;
        int rev = 0;
        while(n>0){
            rev += (n%10)*(n%10)*(n%10);
            n = n/10;
        }
        return original==rev;
    }
};