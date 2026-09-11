class Solution {
  public:
    vector<string> powerSet(string s) {
        // code here
        vector<string>ans;
        ans.push_back("");
        int j=0;
        powerset(ans,s,j);
        return ans;
    }
    void powerset(vector<string>&ans, string &s, int j){
        if(j>=s.size()) return;
        int n = ans.size();
        for(int i=0;i<n;i++){
            string temp = ans[i]+s[j];
            ans.push_back(temp);
        }
        powerset(ans,s,j+1);
    }
};
