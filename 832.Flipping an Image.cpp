class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        vector<vector<int>> finalImage;
        finalImage = A;
        if(1)
        {
            for(int n = 0; n < A.size(); n++)
            {
                for(int m = 0; m < A[n].size(); m++)
                {
                    finalImage[n][m] = A[n][(A[n].size() - m - 1)];
                    if(1 == finalImage[n][m])
                    {
                        finalImage[n][m] = 0;
                    }
                    else
                    {
                        finalImage[n][m] = 1;
                    }
                }
            }
        }
        else
        {
            
        }
        
        return finalImage;
    }
};
