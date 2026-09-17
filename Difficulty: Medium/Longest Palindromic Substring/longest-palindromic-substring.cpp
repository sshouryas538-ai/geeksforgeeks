class Solution {
public:
    string getLongestPal(string &s) {
        string ans = "";

        for (int i = 0; i < s.size(); i++) {
            int f = i;
            int l = i;

            while (f >= 0 && l < s.size() && s[f] == s[l]) {
                f--;
                l++;
            }
            f++;
            l--;
            if (l - f + 1 > ans.size()) {
                ans = s.substr(f, l - f + 1);
            }
            f = i;
            l = i + 1;

            while (f >= 0 && l < s.size() && s[f] == s[l]) {
                f--;
                l++;
            }

            f++;
            l--;

            if (l - f + 1 > ans.size()) {
                ans = s.substr(f, l - f + 1);
            }
        }

        return ans;
    }
};