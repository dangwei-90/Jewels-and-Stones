class Solution {
public:
    int titleToNumber(string s) {
        int ntotal = 0;
        for(int n = (s.size()-1); n >= 0; n--)
        {
            int nBit = s[n] - 64;
            for(int i = 1; i <= (s.size()-1-n); i++)
            {
                nBit = nBit * 26;  
            }
            ntotal = ntotal + nBit;
        }
        
        return ntotal;
    }
};
