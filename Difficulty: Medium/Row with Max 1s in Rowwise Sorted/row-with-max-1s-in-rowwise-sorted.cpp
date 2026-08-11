class Solution {
  public:
    int rowWithMax1s(vector<vector<int>> &arr) {
        // code here
        int n = arr[0].size();
        int cnt = 0;
        int ans = -1;
        int max1 = 0;
        for(int i=0;i<arr.size();i++){
            cnt = 0;
            for(int j=0;j<arr[i].size();j++){
                if(arr[i][j] == 1){
                    cnt++;
                }
                if (cnt > max1) {
                    max1 = cnt;
                    ans = i;
                }
            }
        }
        return ans;
    }
};