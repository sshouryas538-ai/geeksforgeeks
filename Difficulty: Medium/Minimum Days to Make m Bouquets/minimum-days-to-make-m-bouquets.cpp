class Solution {
  public:
    int minDaysBloom(vector<int>& arr, int k, int m) {
        // Code here
        int high = arr[0];
        int low = arr[0];
        for(int i=1;i<arr.size();i++){
            if(arr[i]>high) high = arr[i];
            else if(arr[i]<low) low = arr[i];
        }
        if(arr.size()<(k*m)) return -1;
        int ans = -1;
        while(low<=high){
            int mid = low + (high-low)/2;
            int check = possible(arr,  k, m, mid);
            if(check>=m){
                high = mid -1;
                ans = mid;
            }
            else if(check < m){
                low = mid +1;
            }
        }
        return ans;
    }
    int possible(vector<int>arr, int k,int m,int mid){
        int counter = 0;
        int noOfB = 0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]<=mid) counter++;
            else{
                noOfB += (counter/k);
                counter = 0;
            }
        }
        noOfB += (counter/k);
        return noOfB;
    }
};