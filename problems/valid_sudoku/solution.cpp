class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int n = board.size();
        
        bool hor[n];
        //std::fill(std::begin(hor), std::end(hor), false);
        memset(hor, false, sizeof(bool) * n);

        bool ver[n];
        // std::fill(std::begin(ver), std::end(ver), false);
        memset(ver, false, sizeof(bool) * n);
        
        bool block[n];
        memset(block, false, sizeof(bool) * n);
        
        for(int i=0;i<n;i++) {
            
            int alpha = (i/3)*3;
            int beta = (i%3)*3;
             for(int j=0;j<n;j++) {
                if(board[i][j] != '.') {
                    
                    if(hor[board[i][j]-1-48] == false) {
                        hor[board[i][j]-1-48] = true;
                    }
                    else {
                        return false;
                    }
                }
            
                if(board[j][i] != '.') {
                    if(ver[board[j][i]-1-48] == false) {
                        ver[board[j][i]-1-48] = true;
                    }
                    else {
                        return false;
                    }
                }
                 
                 if(board[alpha+j/3][beta+j%3] != '.') {
                    
                    if(block[board[alpha+j/3][beta+j%3]-1-48] == false) {
                        block[board[alpha+j/3][beta+j%3]-1-48] = true;
                    }
                    else {
                        return false;
                    }
                }
             }
            
            // std::fill(std::begin(hor), std::end(hor), false);
            // std::fill(std::begin(ver), std::end(ver), false);
            memset(hor, false, sizeof(bool) * n);
            memset(ver, false, sizeof(bool) * n);
            memset(block, false, sizeof(bool) * n);
        }
        
        
        return true;
    }
};