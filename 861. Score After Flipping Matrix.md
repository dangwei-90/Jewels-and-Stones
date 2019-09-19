class Solution {
public:
    int matrixScore(vector<vector<int>>& A) {
        // 最大值先确认
        for(int n = 0; n < A.size(); n++)
        {
            if(A[n][0] == 0)
            {
                for(int m = 0; m < A[0].size(); m++)
                {
                    if(A[n][m] == 0)
                    {
                        A[n][m] = 1;
                    }
                    else if(A[n][m] == 1)
                    {
                        A[n][m] = 0;
                    }
                }
            }
        }
        
        // 列最大值
        for(int i = 0; i < A[0].size(); i++)
        {
            int ntol = 0;
            for(int j = 0; j < A.size(); j++)
            {
                ntol = ntol + A[j][i];
            }
            if(ntol > (A.size()/2))
            {
                // ok
            }
            else
            {
                for(int k = 0; k < A.size(); k++)
                {
                    if(A[k][i] == 0)
                    {
                        A[k][i] = 1;
                    }
                    else if(A[k][i] == 1)
                    {
                        A[k][i] = 0;
                    }
                }
            }
        }
        
        // 计算
        int nCount = 0;
        for(int q = 0; q < A.size(); q++)
        {
            int nRowTotal = 0;
            for(int p = 0; p < A[0].size(); p++)
            {
                nRowTotal = nRowTotal * 2 + A[q][p];
            }
            nCount = nCount + nRowTotal;
        }
        
        return nCount;
    }
};
