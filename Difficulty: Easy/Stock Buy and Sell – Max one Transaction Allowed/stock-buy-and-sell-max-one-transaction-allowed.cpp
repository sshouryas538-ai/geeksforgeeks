class Solution {
  public:
    int maxProfit(vector<int> &prices) {
        // code here
        int Buy = INT_MAX, sell = 0, profit = 0;
        for(int i=0;i<prices.size();i++){
            Buy = min(Buy,prices[i]);
            profit = max(profit,prices[i]-Buy);
        }
        return profit;
    }
};
