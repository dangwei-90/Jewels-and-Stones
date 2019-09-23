class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) 
    {
        bool isToplitz = true;
        bool bL = true;
        int nL = 0;
        if (matrix[0].size() > matrix.size())
        {
            bL = true;
            nL = matrix.size();
        }
        else
        {
            bL = false;
            nL = matrix[0].size();
        }

        // 遍历列
        for (int n = 0; n < matrix.size() - 1; n++)
        {
            int nNum = matrix[n][0];

            for (int m = 0; m < nL; m++)
            {

                if (matrix[n + m][m] != nNum)
                {
                    return false;
                }
            }

            if (bL == true)
            {
                nL--;
            }
            else
            {
                if ((matrix.size() - n) <= matrix[0].size())
                {
                    nL--;
                }
            }
        }

        bL = true;
        nL = 0;
        if (matrix[0].size() > matrix.size())
        {
            bL = true;
            nL = matrix.size();
        }
        else
        {
            bL = false;
            nL = matrix[0].size();
        }

        // 遍历行
        for (int n = 0; n < matrix[0].size() - 1; n++)
        {
            int nNum = matrix[0][n];

            for (int m = 0; m < nL; m++)
            {
                if (matrix[m][n + m] != nNum)
                {
                    return false;
                }
            }

            if (bL == false)
            {
                nL--;
            }
            else
            {
                if (matrix.size() >= (matrix[0].size() - n))
                {
                    nL--;
                }
            }
        }

        return true;
    }
    
};
