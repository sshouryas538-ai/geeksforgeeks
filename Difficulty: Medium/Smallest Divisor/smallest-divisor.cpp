class Solution {
  public:
    int smallestDivisor(vector<int>& arr, int k) {
        // Code here
        int low = 1;
        int high = arr[0];
        for(int i=0;i<arr.size();i++){
            if(arr[i]>high) high = arr[i];
            if(arr[i]<low) low = arr[i];
        }
            int ans = -1;
            while(low<=high){
                int mid = low + (high - low)/2;
                int check = total(arr,mid);
                if(check <= k){
                    high = mid -1;
                    ans = mid;
                }
                else{
                    low = mid +1;
                }
            }
            return ans;
    }
    int total(vector<int>& arr,int mid){
        double totalval = 0;
        for(int i=0;i<arr.size();i++){
            totalval += ceil((double)arr[i]/mid);
        }
        return (int)totalval;
    }
};
