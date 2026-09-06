class Solution {
  public:
    long long pairAndSum(vector<int> &arr) {
        // code here
        long long ans = 0;
        for(int bit=0;bit<32;bit++){
            long long cnt = 0;
            for(int i=0;i<arr.size();i++){
                if(arr[i]&(1<<bit)) cnt++;
            }
            ans += (cnt*(cnt-1)/2)*(1LL<<bit);
        }
        return ans;
    }
};