class Solution {
  public:
    vector<int> getFloorAndCeil(int x, vector<int> &arr) {
        // code here
        int fl = INT_MIN, cl = INT_MAX;
        for(auto it:arr){
            if(it <= x) fl = max(fl,it);
            if(it >= x) cl = min(cl,it);
        }
        if(fl == INT_MIN) fl = -1;
        if(cl == INT_MAX) cl = -1;
        return {fl,cl};
    }
};