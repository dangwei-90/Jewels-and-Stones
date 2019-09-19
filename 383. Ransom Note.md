class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        bool bcan = true;
        for(int n = 0; n < ransomNote.size(); n++)
        {
            int nfind = magazine.find(ransomNote[n]);
            if(nfind >= 0)
            {
                magazine[nfind] = '.';
            }
            else
            {
                bcan = false;
                break;
            }
        }
        
        return bcan;
    }
};
