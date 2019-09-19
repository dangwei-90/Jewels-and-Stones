void ComputeArea(vector<vector<int>>& vecc,int x, int y, int& maxArea)
{
    if(x < 0 || x >= vecc.size() || y < 0 || y >= vecc[0].size())
    {
        return ;
    }
    else if(vecc[x][y] == 0 || vecc[x][y] == -1)
    {
        return ;
    }
    else if(vecc[x][y] == 1)
    {
        maxArea ++;
        vecc[x][y] = -1;
        ComputeArea(vecc, x + 1, y, maxArea);
        ComputeArea(vecc, x - 1, y, maxArea);
        ComputeArea(vecc, x, y + 1, maxArea);
        ComputeArea(vecc, x, y - 1, maxArea);
    }
}


class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int nMax = 0;        
        int nTemp = 0;
        for(int n = 0; n < grid.size(); n++)
        {
            for(int m = 0; m < grid[0].size(); m++)
            {
                ComputeArea(grid, n, m, nTemp);
                if(nTemp > nMax)
                {
                    nMax = nTemp;
                } 
                nTemp = 0;
            }
        }
        return nMax;
    }
};
