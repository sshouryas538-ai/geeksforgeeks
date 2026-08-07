class Solution {
  public:
    int minTime(vector<int>& arr, int k) {
        // code here
        long long low=0,high = 0;
        for(int i=0;i<arr.size();i++){
            if(low<arr[i]) low = arr[i];
            high += arr[i];
        }
        int ans;
        while(low<=high){
            long long mid = low + (high - low)/2;
            if(timeRequired(arr,mid,k)){
                high = mid -1;
                ans = (int)mid;
            }
            else{
                low = mid +1;
            }
        }
        return ans;
    }
    bool timeRequired(vector<int>&arr,long long mid,int k){
        int cnt = 1;
        long long total = 0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>mid) return false;
            if(total + arr[i] > mid){
                cnt++;
                total = arr[i];
                if(cnt > k) return false;
            }
            else{
                total += arr[i];
            }
        }
        return cnt<=k;
    }
};