class Solution {
  public:
    double findMedian(vector<int> &arr) {
        // code here.
        sort(arr.begin(),arr.end());
        int n = arr.size();
        if(n%2 == 1){
            return arr[n/2];
        }
        else{
            int low = n/2 -1;
            int high = n/2;
            double ans = (arr[low]+arr[high])/2.0;
            return ans;
        }
    }
};