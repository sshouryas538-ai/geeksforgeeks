    class Solution {
      public:
        
        double squareRoot(int n, int p) {
            double ans = sqrt((double)n);
            double mul = pow(10, p);      // double, not int — no overflow up to huge p
            double ans1 = floor(ans * mul);  // floor() stays in double — no UB cast
            return ans1 / mul;
        }
    };