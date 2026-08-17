class Solution {
  public:
    int maxWater(vector<int> &arr) {
        // code here
        int i = 0, j = arr.size()-1;
        int leftmax = arr[0], rightmax = arr[j];
        int ans = 0;
        while(i<j){
            if(leftmax < arr[i]) leftmax = arr[i];
            if(rightmax < arr[j]) rightmax = arr[j];
            if(leftmax <= rightmax){
                ans += leftmax - arr[i];
                i++;
            }
            else{
                ans += rightmax - arr[j];
                j--;
            }
        }
        return ans;
    }
};