class Solution {
  public:
    bool isPalindrome(string& s) {
        // code here
        stack<char>st;
        for(int i = 0; i<s.size();i++){
            st.push(s[i]);
        }
        for(int i = 0 ; i<s.size() ; i++){
            if(s[i] == st.top()) st.pop();
            else return false;
        }
        return true;
    }
};