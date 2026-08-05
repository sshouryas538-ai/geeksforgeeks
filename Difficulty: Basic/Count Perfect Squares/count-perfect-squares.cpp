class Solution {
  public:
    int countSquares(int n) {
        // code here
        int counter = 0;
        for(int i = 1;i<sqrt(n);i++){
            if(i*i <n) counter++;
        }
        return counter;
    }
};