class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) 
    {
        int nminx = 40001;
        int nminy = 40001;

        // 找到最小的长和宽即可
        for(int i = 0; i < ops.size(); i++)
        {
            if(nminy >= ops[i][0])
            {
                nminy = ops[i][0];
            }
            if(nminx >= ops[i][1])
            {
                nminx = ops[i][1];
            }
            if(nminy >= m)
            {
                nminy = m;
            }
            if(nminx >= n)
            {
                nminx = n;
            }
        }
        if(nminx == 40001 && nminy == 40001)
        {
            return m * n;
        }
        else if(nminx == 40001)
        {
            return n * nminy;
        }
        else if(nminy == 40001)
        {
            return nminx * m;    
        }
        else
        {
            return nminx*nminy;   
        }
    }
};
