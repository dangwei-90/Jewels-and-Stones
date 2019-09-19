class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int nAddCount = 0;
        int i = 0;
        int j = 0;
        
        // grid.size取总行数值
        for(i = 0; i < grid.size(); i++)
        {  
            for(j = 0; j < grid[i].size(); j++)
            {
                int nxMax = 0;
                // 获取第i列最大值
                for(int n = 0; n < grid.size(); n++)
                {
                    if(nxMax <= grid[n][j])
                    {
                        nxMax = grid[n][j];
                    }
                }

               int nyMax = 0;                  
                // grid[0].size 取总列数值，获取每列最大值
                for(int m = 0; m < grid[i].size(); m++)
                {
                    if(nyMax <= grid[i][m])
                    {
                        nyMax = grid[i][m];
                    }
                }
                if(nxMax >= nyMax)
                {
                    nxMax = nyMax;
                }

                nAddCount = nAddCount + nxMax - grid[i][j];
            }
            
        }
        
        return nAddCount;
        
    }
};
