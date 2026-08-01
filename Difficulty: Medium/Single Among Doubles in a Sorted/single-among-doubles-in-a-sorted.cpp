class Solution {
  public:
    int single(vector<int>& arr) {
        // code here
        int n = arr.size();
        if(n==1) return arr[0];
        else if(arr[0]!=arr[1]) return arr[0];
        else if(arr[n-1]!=arr[n-2]) return arr[n-1];
       int low = 1;
       int high = n-2;
       while(low<=high){
           int mid = low + (high-low)/2;
           if(arr[mid] == arr[mid-1] || arr[mid] == arr[mid+1]){
           if(mid%2==1 && arr[mid]==arr[mid-1]) low = mid +1;
           else high = mid -1;
           }
           else{
               return arr[mid];
           }
       }
       return -1;
    }
};