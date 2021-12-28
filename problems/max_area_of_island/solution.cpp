class Solution {
public:
    int max_count = 0;
    int count=0;
    void visit(vector<vector<int>>& grid, vector<vector<bool>>& visited, int row,int col) {
        
        if(row<0 || row >=grid.size() || col<0 || col>=grid[0].size() || visited[row][col] == true || grid[row][col]==0) return;
        
        visited[row][col] = true;
        count++;
        
        visit(grid, visited, row+1, col);
        visit(grid, visited, row-1, col);
        visit(grid, visited, row, col-1);
        visit(grid, visited, row, col+1);
        
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        
        int rows = grid.size();
        int cols = grid[0].size();
        vector<vector<bool>> visited(rows, vector<bool>(cols, false));
        for(int i=0;i<rows;i++) {
            for(int j=0;j<cols;j++) {
                
                if(!visited[i][j] && grid[i][j] == 1) {
                    visit(grid, visited, i, j);
                    if(count>max_count) max_count=count;
                }
                count = 0;
            }
        }
                
        return max_count;
        
    }
};