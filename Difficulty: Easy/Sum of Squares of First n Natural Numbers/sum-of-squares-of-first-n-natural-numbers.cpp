class Solution {
  public:
    int sumOfSquares(int n) {
        // code here
        long long ans=0;
        for(int i = 1;i<=n ; i++){
            ans += i*i;
        }
        return (int)ans;
    }
};