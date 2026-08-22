class Solution {
public:
    int median(vector<vector<int>> &mat) {
        int n = mat.size(), m = mat[0].size();

        int low = INT_MAX, high = INT_MIN;
        for (int i = 0; i < n; i++) {
            low  = min(low,  mat[i][0]);
            high = max(high, mat[i][m - 1]);
        }

        int desired = (n * m) / 2 + 1; 

        while (low < high) {
            int mid = low + (high - low) / 2;
            int count = countLessEqual(mat, mid);
            if (count < desired) low = mid + 1;
            else high = mid;
        }
        return low;
    }

    int countLessEqual(vector<vector<int>> &mat, int x) {
        int count = 0;
        for (auto &row : mat) {
            int clow = 0, chigh = row.size() - 1, idx = row.size(); // reset per row
            while (clow <= chigh) {
                int midd = clow + (chigh - clow) / 2;
                if (row[midd] <= x) {
                    idx = midd;      
                    clow = midd + 1;
                } else {
                    chigh = midd - 1;
                }
            }
            count += clow; 
        }
        return count;
    }
};
