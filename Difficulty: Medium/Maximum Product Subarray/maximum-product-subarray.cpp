class Solution {
  public:
    int maxProduct(vector<int> &arr) {
        int n = arr.size();
        int largest = INT_MIN;

        // Forward pass (prefix products, reset at 0)
        int product = 1;
        for (int i = 0; i < n; i++) {
            product *= arr[i];
            largest = max(largest, product);
            if (arr[i] == 0) product = 1;
        }

        // Backward pass (suffix products, reset at 0)
        product = 1;
        for (int i = n - 1; i >= 0; i--) {
            product *= arr[i];
            largest = max(largest, product);
            if (arr[i] == 0) product = 1;
        }

        return largest;
    }
};