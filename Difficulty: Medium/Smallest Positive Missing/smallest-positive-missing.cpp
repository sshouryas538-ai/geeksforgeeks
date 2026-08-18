class Solution {
  public:
    int missingNumber(vector<int> &arr) {
        // code here
        int low = 1, high = arr.size();
        for(int i=0;i<arr.size();i++){
            while(arr[i]>=low && arr[i]<=high && arr[arr[i]-1] != arr[i]){
                int check = arr[i]-1;
                swap(arr[i],arr[check]);
            }
        }
        int ans = 1;
        for(auto it:arr){
            if(it != ans ) return ans;
            else ans++;
        }
        return high+1;
    }
};