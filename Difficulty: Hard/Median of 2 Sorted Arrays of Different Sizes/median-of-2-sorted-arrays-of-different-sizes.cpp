class Solution {
  public:
    double medianOf2(vector<int>& a, vector<int>& b) {
        // code here
        int p = a.size();
        int q = b.size();
        int n = p+q;
        int check1 = (n/2)-1, check2 = (n/2)+1;
        int i = 0, j =0;
        double ele1 = -1, ele2 = -1;
        int cnt = 0;
        while(cnt < check2){
            if(i<p && (j>=q || a[i]<=b[j])){
                ele2 = ele1;
                ele1 = a[i];
                i++;
                cnt++;
            }
            else{
                ele2 = ele1;
                ele1 = b[j];
                j++;
                cnt++;
            }
        }
        if(n%2 == 0){
            return (ele2+ele1)/2;
        }
        else{
            return ele1;
        }
    }
};