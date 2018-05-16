class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int ncount = 0;
        for(int n = 0; n < grid.size(); n ++)
        {
            for(int m = 0; m < grid[n].size(); m++)
            {
                if(grid[n][m] == 0)
                {
                    continue;
                }
                else
                {
                    // top
                    if((n > 0 && (grid[n-1][m] == 0)) || n == 0)
                    {
                        ncount ++;
                    }
                    // upper
                    if(((n < grid.size()-1) && (grid[n+1][m] == 0)) || (n == grid.size() - 1))
                    {
                        ncount ++;
                    }
                    // left
                    if((m > 0 && (grid[n][m-1] == 0)) || m == 0)
                    {
                        ncount ++;
                    }
                    // right
                    if(((m < grid[m].size()-1) && (grid[n][m+1] == 0)) || (m == grid[n].size() - 1))
                    {
                        ncount ++;
                    }
                }
            }
        }
        
        return ncount;
    }
};
