class Solution {
  public:
    int aggressiveCows(vector<int> &arr, int k) {
        // code here
        sort(arr.begin(),arr.end());
        int n = arr.size()-1;
        int low = 1;
        int high = arr[n]-arr[0];
        int ans = -1;
        while(low<=high){
            int mid = low + (high - low)/2;
            if(possibleD(arr,mid,k)){
                low = mid + 1;
                ans = mid;
            }
            else{
                high = mid -1;
            }
        }
        return ans;
    }
    bool possibleD(vector<int>&arr,int mid,int k){
        int count = 1;
        int lastP = arr[0];
        for(int i=0;i<arr.size();i++){
            if(arr[i]-lastP >= mid){
                lastP = arr[i];
                count++;
                if(count>=k) return true;
            }
        }
        return count>=k;
    }
};