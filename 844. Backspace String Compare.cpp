class Solution {
public:
    bool backspaceCompare(string S, string T) {
        vector<char> vecS;
        vector<char> vecT;
        for(int n = 0; n < S.size(); n++)
        {
            if(S[n] != '#')
            {
                vecS.emplace_back(S[n]);
            }
            else
            {
                if(vecS.size() != 0)
                {
                    vecS.pop_back();
                }
            }
        }
        
        for(int m = 0; m < T.size(); m++)
        {
            if(T[m] != '#')
            {
                vecT.emplace_back(T[m]);
            }
            else
            {
                if(vecT.size() != 0)
                {
                    vecT.pop_back();
                }
            }
        }
        
        if(vecS.size() != vecT.size())
        {
            return false;
        }
        
        for(int i = 0; i < vecS.size(); i++)
        {
            if(vecS[i] != vecT[i])
            {
                return false;
            }
        }
        
        return true;
    }
};
