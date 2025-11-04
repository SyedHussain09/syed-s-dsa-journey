class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size();
        if (n == 0) return {}; // handle empty matrix
        int m = matrix[0].size(); // columns
        
        int strow = 0;
        int stcol = 0;
        int endrow = n - 1;
        int endcol = m - 1;
        vector<int> ans;
        
        while (strow <= endrow && stcol <= endcol) {
            // Traverse Right
            for (int j = stcol; j <= endcol; j++) {
                ans.push_back(matrix[strow][j]);
            }
            strow++;
            
            // Traverse Down
            for (int i = strow; i <= endrow; i++) {
                ans.push_back(matrix[i][endcol]);
            }
            endcol--;
            
            // Traverse Left (check to avoid duplicate row)
            if (strow <= endrow) {
                for (int j = endcol; j >= stcol; j--) {
                    ans.push_back(matrix[endrow][j]);
                }
                endrow--;
            }
            
            // Traverse Up (check to avoid duplicate column)
            if (stcol <= endcol) {
                for (int i = endrow; i >= strow; i--) {
                    ans.push_back(matrix[i][stcol]);
                }
                stcol++;
            }
        }
        
        return ans;
    }
};
