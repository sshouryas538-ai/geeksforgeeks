class Solution {
  public:
    vector<vector<int>> subsets(vector<int>& arr) {
        // code here
        vector<vector<int>>ans;
        ans.push_back({});
        for(int i=0;i<arr.size();i++){
            int n = ans.size();
            for(int j = 0; j < n ; j++){
                vector<int>temp = ans[j];
                temp.push_back(arr[i]);
                ans.push_back(temp);
            }
        }
        return ans;
    }
};