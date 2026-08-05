class Solution {
  public:
    int gcd(int n, vector<int> arr) {
        // Your code goes here
        int result = arr[0];
        for(int i=1;i<arr.size();i++){
            result = __gcd(result,arr[i]);
        }
        return result;
    }
};
