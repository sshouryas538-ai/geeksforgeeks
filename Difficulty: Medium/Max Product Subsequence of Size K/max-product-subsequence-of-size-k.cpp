class Solution {
  public:
    int maxProduct(vector<int> &arr, int k) {
        // code here
        sort(arr.begin(),arr.end());
        int ans = INT_MIN;
        int n = arr.size();
        for(int x=0;x<=k;x++){
            int rt = k-x;
            int pro = 1;
            for(int i=0;i<x;i++){
                pro *= arr[i];
            }
            
            for(int i=0;i<rt;i++){
                pro *= arr[n-1-i];
            }
            ans = max(ans,pro);
        }
        return ans;
    }
};