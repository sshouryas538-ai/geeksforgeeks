class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
        int current = arr[0];
        int ans = arr[0];
        for(int i=1;i<arr.size();i++){
            current = max(arr[i] , current + arr[i]);
            ans = max(ans,current);
        }
        return ans;
    }
};