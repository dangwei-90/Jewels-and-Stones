class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        
        int nTotal = 0;
        
        for(int i = 0; i < grid.size(); i++)
        {          
            int jTemp = 0;
            for(int j = 0; j < grid[0].size(); j++)
            {
                if(jTemp < grid[i][j])
                {
                    jTemp = grid[i][j];
                }                                
            }
            nTotal += jTemp;
        }
        
        for(int q = 0; q < grid[0].size(); q++)
        {          
            int pTemp = 0;
            for(int p = 0; p < grid.size(); p++)
            {
                if(pTemp < grid[p][q])
                {
                    pTemp = grid[p][q];
                }                
            }
            nTotal += pTemp;
        }
        
        
        for(int i = 0; i < grid.size(); i++)
        {          
            for(int j = 0; j < grid[0].size(); j++)
            {
                if(grid[i][j] != 0)
                {
                    nTotal++;
                }
            }
        }
        
        return nTotal;
    }
};
