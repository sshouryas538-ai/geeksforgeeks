class Solution {
  public:
    bool isDigitSumPalindrome(int n) {
        // code here
        int temp = n;
        int total = 0;
        while(temp>0){
            total += (temp%10);
            temp /= 10;
        }
        int temp1 = total;
        int total1 = 0;
        while(temp1>0){
            total1 *= 10;
            total1 += (temp1%10);
            temp1 /= 10;
        }
        return total == total1;
    }
};