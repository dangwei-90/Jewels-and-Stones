class Solution {
public:
    string reverseString(string s) {
        string strReverse = s;
        for(int n = s.size()-1; n >= 0 ; n--)
        {
            strReverse[s.size() - 1 - n] = s[n];
        }
        strReverse[s.size()] = '\0';
        
        return strReverse;
    }
};
