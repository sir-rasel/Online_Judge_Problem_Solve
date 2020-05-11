class Solution {

void color(vector<vector<int>>& image, int i, int j, int m, int n, int c, int o){
        if(i>=0 && j>=0 && i<m && j<n && image[i][j] == o){
            image[i][j] = c;
            color(image, i+1, j, m, n, c, o);
            color(image, i, j-1, m, n, c, o);
            color(image, i-1, j, m, n, c, o);
            color(image, i, j+1, m, n, c, o);
        }
    }

public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        if(newColor!=image[sr][sc])
            color(image, sr, sc, image.size(), image[0].size(), newColor, image[sr][sc]);
        return image;
    }
};
