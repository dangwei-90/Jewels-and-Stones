class Solution {
public:
    string shiftingLetters(string S, vector<int>& shifts) {
        int nSum = 0;
        for(int k = shifts.size()-1; k >= 0; k--)
        {
            int nTemp = shifts[k] % 26;
            nSum = nSum % 26;
            nSum = shifts[k] = (shifts[k] + nSum)%26;
        }
        
        
        for(int n = 0; n < shifts.size(); n++)
        {
            int nMove = shifts[n];
            int nDif = 'z' - S[n] + 1;
            if(nMove < nDif)
            {
                S[n] = S[n] + nMove;
            }
            else if(nMove >= nDif)
            {
                S[n] = 'a' + (nMove - nDif);
            }
        }
        
        return S;
    }
};
