class Solution {
  public:
    int kthElement(vector<int> &a, vector<int> &b, int k) {
        // code here
        long long p = a.size();
        long long q = b.size();
        long long i = 0, j = 0;
        long long n = p + q -1;
        long long cnt = 0;
        while(i<p && j<q){
            if(a[i]>=b[j]){
                cnt++;
                if(cnt == k) return b[j];
                j++;
            }
            else{
                cnt++;
                if(cnt == k) return a[i];
                i++;
            }
        }
        while(i<p){
            cnt++;
            if(cnt == k) return a[i];
            i++;
        }
        while(j<q){
            cnt++;
            if(cnt == k) return b[j];
            j++;
        }
        return -1;
    }
};