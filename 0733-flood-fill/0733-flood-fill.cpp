class Solution {
public:
    
    void dfs(vector<vector<int>>& image, int r, int c, 
             int originalColor, int newColor) {
        
        int n = image.size();
        int m = image[0].size();
        
        // Boundary check
        if (r < 0 || c < 0 || r >= n || c >= m)
            return;
        
        // If color not match, stop
        if (image[r][c] != originalColor)
            return;
        
        // Change color
        image[r][c] = newColor;
        
        // 4 directions
        dfs(image, r+1, c, originalColor, newColor);
        dfs(image, r-1, c, originalColor, newColor);
        dfs(image, r, c+1, originalColor, newColor);
        dfs(image, r, c-1, originalColor, newColor);
    }
    
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, 
                                  int sr, int sc, int color) {
        
        int originalColor = image[sr][sc];
        
        // Important edge case
        if (originalColor == color)
            return image;
        
        dfs(image, sr, sc, originalColor, color);
        
        return image;
    }
};