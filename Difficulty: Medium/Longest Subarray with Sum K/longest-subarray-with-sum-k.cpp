class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
        unordered_map<int,int> mpp;
        long long total = 0;
        int len = 0;
        for(int i=0;i<arr.size();i++){
            total += arr[i];
            if(total == k){
                len = max(len,i+1);
            }
            int rem = total - k;
            if(mpp.find(rem) != mpp.end()){
                int lent = i - mpp[rem];
                len = max(len,lent);
            }
            if(mpp.find(total) == mpp.end()){
                mpp[total] = i;
                
            }
        }
        return len;
    }
};