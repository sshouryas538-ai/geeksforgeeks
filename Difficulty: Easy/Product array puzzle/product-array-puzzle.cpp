class Solution {
  public:
    vector<int> productExceptSelf(vector<int>& arr) {
        // code here
        int n = arr.size();
        vector<int>ans(n,0);
        int count = 0;
        long long total = 1;
        for(auto it:arr){
            if(it == 0){
                count++;
                continue;
            }
            total *= it;
        }
        if(count > 1) return ans;
        else if(count == 1){
            for(int i=0;i<arr.size();i++){
                if(arr[i] == 0) ans[i] = total;
            }
            return ans;
        }
        else{
            for(int i=0;i<arr.size();i++){
                ans[i] = total/arr[i];
            }
            return ans;
        }
    }
};
