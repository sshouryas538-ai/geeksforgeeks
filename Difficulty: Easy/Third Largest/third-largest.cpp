class Solution {
  public:
    int thirdLargest(vector<int> &arr) {
        // code here
        int n = arr.size();
        if(n<3) return -1;
        int largest = INT_MIN, slargest = INT_MIN, tlargest = INT_MIN;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>=largest){
                tlargest = slargest;
                slargest = largest;
               largest = arr[i];
            }
            else if(arr[i]>=slargest && arr[i]<largest) {
                tlargest = slargest;
                slargest = arr[i];
            }
            else if(arr[i]>tlargest && arr[i]<slargest) tlargest = arr[i];
        }
        return tlargest;
    }
};