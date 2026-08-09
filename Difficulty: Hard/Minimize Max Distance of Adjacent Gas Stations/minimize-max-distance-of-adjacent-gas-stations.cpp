class Solution {
  public:
    double minMaxDist(vector<int> &stations, int k) {
        // Code here
         int n = stations.size();
         if (n <= 1) return 0.0;
         vector<int>howMany(n-1,0);
         priority_queue<pair<long double,int>>pq;
         for(int i=0;i<n-1;i++){
             pq.push({stations[i+1]-stations[i],i} );
         }
         for(int gasStations = 1;gasStations <= k; gasStations++){
             auto tp = pq.top(); pq.pop();
             int secInd = tp.second;
             howMany[secInd]++;
             long double iniDiff = stations[secInd + 1] - stations[secInd];
             long double newSecLen = iniDiff / (long double) (howMany[secInd] + 1);
             pq.push({newSecLen,secInd});
         }
      return (double)pq.top().first;
    }
};