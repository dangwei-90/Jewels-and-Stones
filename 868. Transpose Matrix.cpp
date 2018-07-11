class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
        vector<vector<int>> vecret;
        for(int n = 0; n < A[0].size(); n++)
        {
            vector<int> temp;
            for(int m = 0; m < A.size(); m++)
            {
                temp.emplace_back(A[m][n]);
            }
            vecret.emplace_back(temp);
        }
        
        return vecret;
    }  
};
