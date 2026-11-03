class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {

        int m = mat.size();
        int n = mat[0].size();

        if (m * n != r * c) {
            return mat;
        }

        // Step 1: Create a 1D vector
        vector<int> arr(m * n);

        // Step 2: Store matrix elements row-wise
        int k = 0;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                arr[k] = mat[i][j];
                k++;
            }
        }

        // Step 3: Create a new 2D vector of r rows and c columns
        vector<vector<int>> ans(r, vector<int>(c));

        // Step 4: Distribute elements into the new matrix
        k = 0;

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                ans[i][j] = arr[k];
                k++;
            }
        }

        return ans;
    }
};