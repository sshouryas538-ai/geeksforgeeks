class Solution {
  public:
    int peakElement(vector<int> &arr) {
        // code here
        for(int i=0;i<arr.size();i++){
            if(i == 0 && arr[0] > arr[1]){
                return i;
            }
            if(i>0 && arr[i]>arr[i+1] && arr[i]>arr[i-1] && i<arr.size()-1){
                return i;
            }
            if(i == arr.size()-1 && arr[i] > arr[i-1]) return i;
        }
    }
};