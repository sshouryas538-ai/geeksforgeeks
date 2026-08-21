class Solution {
  public:
    vector<int> consecutiveSum(int n) {
        // code here
        int mid = n/3,first = mid - 1, last = mid + 1;
        if(first + mid + last == n) return {first,mid,last};
        else return {-1};
    }
};