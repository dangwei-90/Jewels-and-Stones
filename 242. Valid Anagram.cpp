class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size())
        {
            return false;
        }
        for(int n = 0; n < s.size(); n++)
        {
            int nfind = t.find(s[n]);
            if(nfind > -1)
            {
                t[nfind] = '.';
            }
        }
        
        for(int m = 0; m < t.size(); m++)
        {
            if(t[m] != '.')
            {
                return false;
            }
        }
        
        return true;
    }
};
