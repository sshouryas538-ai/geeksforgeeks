class Solution {
  public:
    int countPairs(vector<int>& arr, int k) {
        // code here
        sort(arr.begin(),arr.end());
        int left = 0;
        int counter = 0;
        for(int i=0;i<arr.size();i++){
            while(arr[i]-arr[left] >= k){
                left++;
            }
            counter += (i - left);
        }
        return counter;
    }
};