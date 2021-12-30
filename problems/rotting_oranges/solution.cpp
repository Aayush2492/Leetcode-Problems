class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int count_fresh = 0;
        queue<pair<int, int>> q;
        vector<vector<int>> level(m, vector<int>(n, -1));
        for(int i=0;i<m;i++) {
            for (int j=0;j<n;j++) {
                if(grid[i][j] == 2) {
                    q.emplace(i, j);
                    level[i][j] = 0;
                }
                else if(grid[i][j] == 1) count_fresh++;
            }
        }
        
        if(count_fresh == 0) return 0;
        int count=0;
        vector<int> DIR = {0, 1, 0, -1, 0};
        while(!q.empty()){
            auto [i, j] = q.front();
            q.pop();
            for(int k=0;k<4;k++) {
                int r = i + DIR[k];
                int c = j + DIR[k+1];

                if(r<0||r== m||c<0||c==n||grid[r][c]!=1 || level[r][c] != -1) continue;
                cout<<"Here: "<<r<<" "<<c<<"\n";
                level[r][c] = 1 + level[i][j];
                count = (level[r][c] > count)? level[r][c]:count;
                q.emplace(r, c);
                count_fresh--;
            }
            
        }
        
        // for(int i=0;i<m;i++) {
        //     for (int j=0;j<n;j++) {
        //         if(grid[i][j] == 1 && level[i][j] == -1) count = -1;
        //     }
        // }
        count = (count_fresh ==0)? count:-1;
        return count;
        
    }
};