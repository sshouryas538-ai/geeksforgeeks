class Solution {
  public:
    vector<int> singleNum(vector<int>& arr) {
        // Code here.
        vector<int>ans;
        unordered_map<int,int>mpp;
        for(auto it:arr){
            mpp[it]++;
        }
        for(auto& [kk,val] : mpp){
            if(val == 1) ans.push_back(kk);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};