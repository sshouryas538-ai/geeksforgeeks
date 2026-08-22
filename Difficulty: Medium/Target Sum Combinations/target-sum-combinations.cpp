class Solution {
  public:
    vector<vector<int>> targetSumComb(vector<int> &arr, int target) {
        // code here
        vector<int>path;
        vector<vector<int>>ans;
        solve(arr,0,target,path,ans);
        return ans;
    }
    private:
    void solve(vector<int>&arr,int index,int target,vector<int>path,vector<vector<int>>&ans){
        
        if(target == 0){
            ans.push_back(path);
            return;
        }
        
        if(target<0 || index == arr.size()) return;
        
        solve(arr,index+1,target,path,ans);
        path.push_back(arr[index]);
        solve(arr,index,target-arr[index],path,ans);
        path.pop_back();
    }
};