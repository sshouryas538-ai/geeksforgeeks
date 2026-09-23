class Solution {
  public:
    int maxProfit(vector<int> &prices) {
        // code here
        int first_Buy = INT_MAX, first_profit = 0;
        int second_Buy = INT_MAX, second_profit = 0;
        for(int i=0;i<prices.size();i++){
            first_Buy = min(first_Buy,prices[i]);
            first_profit = max(first_profit,prices[i]-first_Buy);
            second_Buy = min(second_Buy,prices[i]-first_profit);
            second_profit = max(second_profit,prices[i]-second_Buy);
        }
        return second_profit;
    }
};