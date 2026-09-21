class Solution {
  public:
    bool wordBreak(string &s, vector<string> &dictionary) {
        // code here
        int n = s.size();
        unordered_set<string>st(dictionary.begin(),dictionary.end());
        vector<bool>check(n+1,false);
        check[0] = true;
        for(int i=1;i<=n;i++){
            for(int j=0;j<i;j++){
                string word = s.substr(j,i-j);
                if(check[j] && st.find(word) != st.end()){
                    check[i] = true;
                    break;
                }
            }
        }
        return check[n];
    }
};