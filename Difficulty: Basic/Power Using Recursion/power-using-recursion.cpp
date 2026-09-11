class Solution {
  public:
    int recursivePower(int n, int p) {
        // code here
        int total = 1;
        ans(n,p,total);
        return total;
    }
    void ans(int n,int p,int &total){
        if(p == 0) return;
        total *= n;
        ans(n,p-1,total);
    } 
};
