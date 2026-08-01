class Solution {
  public:
    int nthRoot(int n, int m) {
        // Code here
        int low = 0;
        int high = m;
        while(low<=high){
            int nn = n;
            int mid = low + (high - low)/2;
            int check = 1;
            while(nn>0){
                check *= mid;
                nn--;
            }
            if(check==m) return mid;
            else if(check > m) high = mid -1;
            else{
                low = mid +1;
            }
        }
        return -1;
    }
};