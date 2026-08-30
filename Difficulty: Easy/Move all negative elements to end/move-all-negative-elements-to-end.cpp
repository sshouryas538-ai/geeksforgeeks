class Solution {
  public:
    void segregateElements(vector<int>& arr) {
        // code here
       vector<int>ans;
       vector<int>posi;
       vector<int>neg;
       for(auto it:arr){
           if(it < 0) neg.push_back(it);
           else posi.push_back(it);
       }
       for(auto it:posi) ans.push_back(it);
       for(auto it:neg) ans.push_back(it);
       
       for(int i=0;i<arr.size();i++){
           arr[i] = ans [i];
       }
    }
};