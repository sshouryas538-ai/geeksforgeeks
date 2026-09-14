class Solution {
  public:
    int doOverlap(vector<int> L1, vector<int> R1, vector<int> L2, vector<int> R2) {
        // code here
        int x1 = L1[0], x2 = R1[0], x3 = L2[0], x4 = R2[0];
        int y1 = L1[1], y2 = R1[1], y3 = L2[1], y4 = R2[1];
        bool check1 = x1 < x4 && x2 > x3;
        bool check2 = y1>= y4 && y2 <= y3;
        return check1&&check2;
    }
};