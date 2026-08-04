class Solution {
  public:
    int leastWeightCapacity(vector<int>& arr, int D) {
        // code here
        int low = 0;
        int high = 0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>low) low = arr[i];
            high += arr[i];
        }
        int ans = 0;
        while(low<=high){
            int mid = low + (high - low)/2;
            if(capacity(arr,D,mid)){
                high = mid -1;
                ans = mid;
            }
            else{
                low = mid +1;
            }
        }
        return ans;
    }
    bool capacity(vector<int>arr,int D,int mid){
        int total = 0;
        int Day = 1;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>mid) return false;
            if(total + arr[i] > mid){
                Day++;
                total = arr[i];
            }
            else{
                total += arr[i];
            }
        }
        return Day<=D;
    }
};