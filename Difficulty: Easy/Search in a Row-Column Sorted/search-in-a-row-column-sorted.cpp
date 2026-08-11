class Solution {
public:
    bool matSearch(vector<vector<int>>& arr, int x) {
        int i = arr.size();
        int j = arr[0].size();
        int row = 0, col = j-1;
        while(row<i && col>=0){
            if(arr[row][col]==x) return true;
            else if(arr[row][col] > x) col--;
            else row++;
        }
        return false;
    }
};