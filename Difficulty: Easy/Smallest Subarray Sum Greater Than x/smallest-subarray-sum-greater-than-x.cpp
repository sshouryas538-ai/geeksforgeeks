class Solution {
  public:
    int smallestSubWithSum(int x, vector<int>& arr) {
        // code here
        int ans = INT_MAX;
        int j = 0, temp = 0;
        for(int i=0;i<arr.size();i++){
            temp += arr[i];
            while(temp > x){
                ans = min(ans, i-j+1);
                temp -= arr[j];
                j++;
            }
        }
        if(ans == INT_MAX) return 0;
        else return ans;
    }
};