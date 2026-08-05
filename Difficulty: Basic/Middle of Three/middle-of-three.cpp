class Solution {
  public:
    int middle(int a, int b, int c) {
        // code here
        if(a>b && b>c || a<b && b<c) return b;
        else if(b>c && c>a || b<c && c<a) return c;
        else if(a<c && a>b || a>c && a<b) return a;
    }
};