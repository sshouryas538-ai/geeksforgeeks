class Solution {
  public:
    int findPages(vector<int> &arr, int k) {
        // code here
        int n = arr.size();
        if(n<k) return -1;
        long long low = 0;
        long long high = 0;
        for(int i=0;i<arr.size();i++){
            if(low<arr[i]) low = arr[i];
            high += arr[i];
        }
        long long ans = -1;
        while(low<=high){
            long long mid = low + (high - low)/2;
            if(possibleP(arr,mid,k)){
                high = mid -1;
                ans = mid;
            }
            else{
                low = mid +1;
            }
        }
        return (int)ans;
    }
    bool possibleP(vector<int>&arr,long long mid,int k){
        int cnt = 1;
        long long page = 0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>mid) return false;
            if(page + arr[i] > mid){
                cnt++;
                page = arr[i];
            }
            else{
                page += arr[i];
            }
        }
        return cnt<=k;
    }
};