class Solution {
  public:
    int findK(vector<vector<int>> &mat, int k) {
        // code here.
        int rows = mat.size(),column = mat[0].size();
            int left = 0,right = column-1,top=0,bottom=rows-1,check=1;
            while(left<=right && top<=bottom){
                for(int i=left;i<=right;i++){
                    if(check == k) return mat[top][i];
                    check++;
                }
                top++;
                for(int i=top;i<=bottom;i++){
                    if(check == k) return mat[i][right];
                    check++;
                }
                right--;
                for(int i=right;i>=left;i--){
                    if(check == k) return mat[bottom][i];
                    check++;
                }
                bottom--;
                for(int i=bottom;i>=top;i--){
                    if(check == k) return mat[i][left];
                    check++;
                }
                left++;
            }
            return -1;
    }
};