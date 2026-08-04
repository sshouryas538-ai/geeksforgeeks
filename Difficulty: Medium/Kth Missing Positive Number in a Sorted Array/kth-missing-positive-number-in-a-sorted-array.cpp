class Solution {
  public:
    int kthMissing(vector<int> &arr, int k) {
        // code here
        int number = k;
        for(int i=0;i<arr.size();i++){
            if(arr[i]<= number) number++;
            else{
                break;
            }
        }
        return number;
    }
};