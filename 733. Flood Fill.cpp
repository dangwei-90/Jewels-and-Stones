class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        // 从开始点递归
        if(image[sr][sc] == newColor)
        {
            return image;
        }
        
        int nNeedChange = image[sr][sc];
        
        FillColor(image, sr, sc, newColor, nNeedChange);
                
        return image;
    }
    
    void FillColor(vector<vector<int>>& image, int sr, int sc, int newColor, int nNeedChange)
    {
        if(image[sr][sc] != nNeedChange)
        {
            return;
        }
        
        image[sr][sc] = newColor;
        
        if(sr >= 1)
        {
            FillColor(image, sr - 1, sc, newColor, nNeedChange);
        }
        if(sr < image.size() - 1)
        {
            FillColor(image, sr + 1, sc, newColor, nNeedChange);
        }
        if(sc >= 1)
        {
            FillColor(image, sr, sc - 1, newColor, nNeedChange);
        }
        if(sc < image[sc].size() - 1)
        {
            FillColor(image, sr, sc + 1, newColor, nNeedChange);
        }
    }
};
