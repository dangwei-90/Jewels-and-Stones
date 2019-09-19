class Solution {
public:
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        if(grid.size() < 3 || grid[0].size() < 3)
        {
            return 0;
        }
        int nCount = 0;
        for(int n = 0; n < grid.size() - 2; n++)
        {
            for(int m = 0; m < grid[0].size() - 2; m++)
            {
                if(grid[n][m] > 9 || grid[n][m] < 1 || grid[n+1][m] > 9 || grid[n+1][m] < 1 || grid[n+2][m] > 9 || grid[n+2][m] < 1
                  || grid[n][m+1] > 9 || grid[n][m+1] < 1 || grid[n+1][m+1] > 9 || grid[n+1][m+1] < 1  || 
                   grid[n+2][m+1] > 9 || grid[n+2][m+1] < 1 || grid[n][m+2] > 9 || grid[n][m+2] < 1 || grid[n+1][m+2] > 9 || 
                   grid[n+1][m+2] < 1  || grid[n+2][m+2] > 9 || grid[n+2][m+2] < 1)
                {
                    continue;
                }
                
                
                int sum1 = grid[n][m] + grid[n][m+1] + grid[n][m+2];
                int sum2 = grid[n+1][m] + grid[n+1][m+1] + grid[n+1][m+2];
                int sum3 = grid[n+2][m] + grid[n+2][m+1] + grid[n+2][m+2];
                int sum4 = grid[n][m] + grid[n+1][m] + grid[n+2][m];
                int sum5 = grid[n][m+1] + grid[n+1][m+1] + grid[n+2][m+1];
                int sum6 = grid[n][m+2] + grid[n+1][m+2] + grid[n+2][m+2];
                int sum7 = grid[n][m] + grid[n+1][m+1] + grid[n+2][m+2];
                int sum8 = grid[n+2][m] + grid[n+1][m+1] + grid[n][m+2];
                if(sum1 == sum2 && sum1 == sum3 && sum1 == sum4 && sum1 == sum5 && sum1 == sum6 && sum1 == sum7 && sum1 == sum8)
                {
                    nCount ++;
                }
            }
        }
        
        return nCount;
    }
};
