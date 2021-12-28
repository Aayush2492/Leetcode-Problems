class Solution {
public:
    
    void filler(vector<vector<int>>& image, int sr, int sc, int newColor, int oldColor) {
        if(sr<0 || sr>=image.size() || sc<0 || sc >= image[0].size()) return;
        
        if(image[sr][sc] == oldColor) {
            image[sr][sc] = newColor;
            filler(image, sr-1, sc, newColor, oldColor);
            filler(image, sr+1, sc, newColor, oldColor);
            filler(image, sr, sc+1, newColor, oldColor);
            filler(image, sr, sc-1, newColor, oldColor);
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        if(image[sr][sc] == newColor) return image;           
        int oldColor = image[sr][sc];
        filler(image, sr, sc, newColor, oldColor);
        return image;
    }
};