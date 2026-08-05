class Solution {
  public:
    bool isPower(int x, int y) {
        // code here
        if (y == 1) return true;
        if (x == 1) return false;
        if (x == 0) return (y == 0);
        if (x == -1) return (y == 1 || y == -1);
        long long check = 1;
        while(check <= y){
            if(check == y) return true;
            else{
                check *= x;
            }
        }
        return false;
    }
};