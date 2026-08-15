class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        // code here
        vector<int>ans;
        vector<int>ans1 = {-1};
        int check = 0;
        int i=0, j = 0, n = arr.size();
        while(j<n){
            check += arr[j];
            while(check>target && i<=j){
                check -= arr[i];
                i++;
            }
            if(check == target){
                ans.push_back(i+1);
                ans.push_back(j+1);
                return ans;
            }
            j++;
        }
        return ans1;
    }
};