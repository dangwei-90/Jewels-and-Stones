class Solution {
public:
    
    bool isAnagram(string s, string t) {
        // 使用sort排序
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        
        if(s == t)
        {
            return true;
        }
        else
        {
            return false;
        }
        
        // my solution 
        /*
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
        */
    }
};
