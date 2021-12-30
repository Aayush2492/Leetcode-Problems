class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        queue<pair<int, int>> q;
        for(int i=0;i<m;i++) {
            for (int j=0;j<n;j++) {
                if(mat[i][j] == 0) q.emplace(i, j);
                else mat[i][j] = -1;
            }
        }
        
        vector<int> DIR = {0, 1, 0, -1, 0};

        while(!q.empty()) {
            auto [i , j] = q.front(); q.pop();
            for(int k=0;k<4;k++) {
                int r = i + DIR[k];
                int c = j + DIR[k+1];

                if(r<0||r== m||c<0||c==n||mat[r][c]!=-1) continue;
                mat[r][c] = 1 + mat[i][j];
                q.emplace(r, c);
            }
        }
        return mat;
    }
};