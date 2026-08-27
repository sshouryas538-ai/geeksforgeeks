class Solution {
  public:
    int minJumps(vector<int>& arr) {
        // code here
        int ans = 0, current = 0, check = 0, n = arr.size();
        if(n == 1) return ans;
        if(arr[0] == 0) return -1;
        for(int i=0;i<n-1;i++){
            check = max(check,arr[i]+i);
            if(i==current){
                if(check == current) return -1;
                ans++;
                current = check;
                if(current >= n-1) break;
            }
        }
        return ans;
    }
};
