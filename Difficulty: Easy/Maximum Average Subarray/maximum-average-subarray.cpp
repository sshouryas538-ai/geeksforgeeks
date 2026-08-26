class Solution {
  public:
    int findMaxAverage(vector<int>& arr, int k) {
        // code here
        int avg = 0;
        for(int i=0;i<k;i++) avg += arr[i];
        
        int check = avg;
        int ans = 0;
        for(int j=k;j<arr.size();j++){
            check += arr[j] - arr[j-k];
            int in = j-k+1;
            if(check > avg){
                avg = check;
                ans = in;
            }
        }
        return ans;
    }
};