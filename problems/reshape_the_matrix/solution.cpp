class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        
        int m = mat.size();
        int n = mat[0].size();
        if(m*n != r*c) return mat;
        
        vector<vector<int>> op;
        
        int alpha=0,beta=0;
        for(int i=0;i<r;i++) {
            vector<int> row;
            for(int j=0;j<c;j++) {
                row.push_back(mat[alpha][beta]);
                beta++;
                if(beta == n) {
                    alpha++;
                    beta=0;
                }
            }
            op.push_back(row);
        }
        
        return op;
    }
};