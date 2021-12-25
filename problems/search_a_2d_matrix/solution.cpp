class Solution {
public:    
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        
        long long int low = 0;
        long long int high = n*m-1;
        
        while(low <= high) {
            long long int mid = (low+high)/2;
            
            int elem = matrix[mid/n][mid%n];
            if(elem == target) {
                return true;
            }
            else if(elem < target) {
                low = mid+1;
            }
            else {
                high = mid-1;
            }
            
        }
        return false;
    }
};