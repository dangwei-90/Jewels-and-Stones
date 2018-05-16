class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        string stroneline = "QWERTYUIOPqertyuiop";
        string strsecondline = "ASDFGHJKLasdfghjkl";
        string strthirdline = "ZXCVBNMzxcvbnm";
        
        vector<string> strwords;
        for(int n = 0 ; n < words.size(); n++)
        {
            // 过滤words[n]
            bool bfirst = 0;
            bool bsecond = 0;
            bool bthird = 0;
            bool bnotmatch = 0;
            for(int m = 0; m < words[n].size(); m++)
            {           
                int nfind = -1;
                nfind = stroneline.find(words[n][m]);
                if(nfind != -1)
                {
                    bfirst = true;
                }
                nfind = strsecondline.find(words[n][m]);
                if(nfind != -1)
                {
                    bsecond = true;
                }
                nfind = strthirdline.find(words[n][m]);
                if(nfind != -1)
                {
                    bthird = true;
                }
                
                if(bfirst != 0 && bsecond != 0)
                {
                    bnotmatch = 1;
                    break;
                }
                else if(bfirst != 0 && bthird != 0)
                {
                    bnotmatch = 1;
                    break;
                }
                else if(bsecond != 0 && bthird != 0)
                {
                    bnotmatch = 1;
                    break;
                }
            }
            if(bnotmatch == 0)
            {
                strwords.push_back(words[n]);
            }
            
            bfirst = 0;
            bsecond = 0;
            bthird = 0;
            bnotmatch = 0;
            
        }
        
        return strwords;
    }
};
