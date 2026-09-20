class Solution {
  public:
    void rearrange(vector<int>& arr) {
        // Your code here
        sort(arr.begin(),arr.end());
        int i=0;
        while(i<arr.size()-1){
            reverse(arr.begin()+i,arr.end());
            i++;
        }
    }
};