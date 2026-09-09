class Solution {
  public:
    vector<string> permutation(string s) {
        // code here
        vector<bool>check(s.size(),false);
        string current;
        multiset<string>result;
        backtracking(s,check,current,result);
        vector<string>ans(result.begin(),result.end());
        return ans;
    }
    void backtracking(string s, vector<bool>&check, string current, multiset<string>&result){
        if(current.size() == s.size()){
            result.insert(current);
        }
        
        for(int i=0;i<s.size();i++){
            if(check[i]) continue;
            
            current.push_back(s[i]);
            check[i] = true;
            
            backtracking(s,check,current,result);
            current.pop_back();
            check[i] = false;
        }
    }
};