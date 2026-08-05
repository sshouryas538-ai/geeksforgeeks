class Solution {
  public:
    int findMean(vector<int>& arr) {
        // code here
        int total = 0;
        for(int i=0;i<arr.size();i++){
            total += arr[i];
        }
        int n = arr.size();
        return (total/n);
    }
};