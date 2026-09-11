class Solution {
  public:
    int sequence(int n) {
        // code here
        int temp = 1;
        int ans = 0, add = 1;
        total(n,temp,ans,add);
        return ans;
    }
    void total(int n,int temp,int &ans, int &add){
        if(temp > n) return;
        int i = 0;
        long long pro = 1;
        while(i<temp){
            pro  = (pro*add)%1000000007;
            add++;
            i++;
        }
        ans = (ans + pro)%1000000007;
        total(n,temp+1,ans,add);
    }
};