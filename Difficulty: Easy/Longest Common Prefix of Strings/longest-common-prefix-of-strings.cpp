class Solution {
  public:
    string longestCommonPrefix(vector<string> arr) {
        // your code here
        string check = arr[0];
        string answer = check;
        for(int i = 0 ;i<arr.size();i++){
            int j  = 0;
            string temp = "";
            while(j<answer.size() && j<arr[i].size()){
                if(check[j] != arr[i][j]) break;
                temp += arr[i][j];
                j++;
            }
            answer = temp;
        }
        return answer;
    }
};