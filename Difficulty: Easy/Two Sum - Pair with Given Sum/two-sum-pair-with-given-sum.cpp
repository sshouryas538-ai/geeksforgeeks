class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        // code here
        unordered_map<int,int>mpp;
        for(int i=0;i<arr.size();i++){
            int temp = target - arr[i];
            if(mpp.find(temp) != mpp.end()) return true;
            else mpp[arr[i]]++;
        }
        return false;
    }
};