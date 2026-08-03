class Solution {
  public:
    int leastWeightCapacity(vector<int>& arr, int D) {
        // code here
        int low = 0;
        int high = 0;
        for(int i=0;i<arr.size();i++){
            low = max(low,arr[i]);
            high += arr[i];
        }
        int ans = high;
        while(low<=high){
            int mid = low + (high - low)/2;
            if(miniD(arr,D,mid)){
                ans = mid;
                high = mid -1;
            }
            else low = mid +1;
        }
        return ans;
    }
    bool miniD(vector<int>arr,int D,int mid){
        int days = 1;
        int total = 0;
        for(int i=0;i<arr.size();i++){
           if((total + arr[i] )> mid){
               days++;
               total = arr[i];
           }
           else {
               total += arr[i];
           }
        }
        return days<=D;
    }
};