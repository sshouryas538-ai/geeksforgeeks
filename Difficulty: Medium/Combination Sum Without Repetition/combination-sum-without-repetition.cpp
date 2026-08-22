class Solution {
  public:
    vector<vector<int>> uniqueCombinations(vector<int> &arr, int target) {
        // code here
        sort(arr.begin(),arr.end());
        vector<int>path;
        vector<vector<int>>ans;
        solve(arr,0,target,path,ans);
        return ans;
    }
    
    private:
    void solve(vector<int>&arr,int index,int target,vector<int>&path,vector<vector<int>>&ans)
    {
        if(target == 0){
            ans.push_back(path);
            return;
        }
        
        if(target < 0 || index == arr.size()) return;
        
        for(int i = index; i<arr.size();i++){
            if(arr[i] > target) break;
            if(i>index && arr[i] == arr[i-1]) continue;
            
            path.push_back(arr[i]);
            solve(arr,i+1,target-arr[i],path,ans);
            path.pop_back();
        }
    }
};