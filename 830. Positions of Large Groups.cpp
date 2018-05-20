class Solution {
public:
    vector<vector<int>> largeGroupPositions(string S) {
        vector<vector<int>> vec;
        int nMax = 0;
        int nsame = 1;
        for(int n = 1; n <= S.size(); n++)
        {
            if(n == S.size() || S[n] != S[n - 1])
            {
                if(nsame >= 3)
                {
                    vector<int> temp = {n - nsame, n - 1};
                    vec.emplace_back(temp);
                    nMax = nsame;
                }
                nsame = 1;   
            }           
            else
            {
                nsame ++;
            }
         
        }
        
        return vec;
    }
};
