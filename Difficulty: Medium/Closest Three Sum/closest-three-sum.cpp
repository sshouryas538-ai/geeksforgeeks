class Solution {
  public:
    int closest3Sum(vector<int> &arr, int target) {
        // code here
        sort(arr.begin(),arr.end());
        int answer = arr[0]+arr[1]+arr[2];
        for(int i=0;i<arr.size();i++){
            int left = i+1, right = arr.size()-1;
            while(left<right){
                int check = arr[i]+arr[left]+arr[right];
                if(abs(target-check) == abs(target-answer)) answer = max(check,answer);
                if(abs(target-check) < abs(target-answer)) answer = check;
                if(check < target) left++;
                else if(check > target) right--;
                else return check;
            }
        }
        return answer;
    }
};