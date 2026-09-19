class Solution {
  public:
    int minDist(vector<int>& arr, int x, int y) {
        // code here
        int n1 = INT_MAX;
        int n2 = INT_MAX;
        int ans = INT_MAX;
        for(int i=0;i<arr.size();i++){
            if(arr[i] == x) n1 = i;
            if(arr[i] == y) n2 = i;
            if(n1 != INT_MAX && n2 != INT_MAX){
                int temp = abs(n1-n2);
                ans = min(ans,temp);
            }
        }
        if(n1 == INT_MAX ||n2 == INT_MAX) return -1;
        else return ans;
    }
};