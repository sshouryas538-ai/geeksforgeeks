class Solution {
  public:
    vector<vector<int>> permuteDist(vector<int>& arr) {
        // code here
        vector<int>current;
        vector<bool>used(arr.size(),false);
        vector<vector<int>>ans;
        backtrack(arr,current,used,ans);
        return ans;
    }
    
    private:
    void backtrack(vector<int>&arr, vector<int>&current, vector<bool>&used, vector<vector<int>>&ans){
        
        if(arr.size() == current.size()){
            ans.push_back(current);
            return;
        }
        
        for(int i = 0; i<arr.size();i++){
            
            if(used[i]) continue;
            
            current.push_back(arr[i]);
            used[i] = true;
            
            backtrack(arr,current,used,ans);
            current.pop_back();
            used[i] = false;
        }
    }
};