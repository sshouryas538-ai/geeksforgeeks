class Solution {
  public:
    string findLargest(vector<int> &arr) {
        // code here
        vector<string>ans;
        for(auto it:arr){
            ans.push_back(to_string(it));
        }
        
        sort(ans.begin(), ans.end(), [](string a, string b) {
                    return a + b > b + a;
                });
        string total ="";
        for(auto it:ans) total += it;
        if(total[0] == '0') return "0";
        return total;
    }
};