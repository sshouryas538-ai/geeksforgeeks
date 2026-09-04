class Solution {
  public:
    int maxFruits(vector<int>& arr, int m) {
        // code here
        int check1 = 0;
        for(int i=0;i<m;i++){
            check1 += arr[i];
        }
        int ans1 = check1;
        int i=1,j = m;
        while(i<arr.size()){
            if(j>=arr.size()) j = 0;
            check1 -= arr[i-1];
            check1 += arr[j];
            ans1 = max(ans1,check1);
            j++;
            i++;
        }
        
        return ans1;
    }
};