class Solution {
  public:
    int longestUniqueSubstr(string &s) {
        // code here
        unordered_set<char>st;
        int i=0,j=0,ans = 0;
        while(j<s.size()){
            while(st.find(s[j]) != st.end()){
                st.erase(s[i]);
                i++;
            }
            st.insert(s[j]);
            ans = max(ans, j-i+1);
            j++;
        }
        return ans;
    }
};
