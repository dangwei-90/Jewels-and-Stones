class Solution {
public:
    string reverseWords(string s) {
        vector<string> reverseStr;
        int nfind = 0;
        while(nfind != -1)
        {
            int ntemp = 0;
            ntemp = s.find(" ", nfind);
            if(ntemp == 0)
            {
                nfind += 1;
                continue;
            }
            if(ntemp == -1)
            {
                // 结尾/未找到
                ntemp = s.size();
                reverseStr.push_back(s.substr(nfind, ntemp - nfind));
                            
                nfind = -1;
            }
            else
            {
                // 找到
                reverseStr.push_back(s.substr(nfind, ntemp - nfind));
                nfind = ntemp + 1;
            }
        }
        
        for(int n = 0; n < reverseStr.size(); n++)
        {
            string strTemp = reverseStr[n];
            for(int m = 0; m < reverseStr[n].size(); m++)
            {
                strTemp[m] = reverseStr[n][reverseStr[n].size()- m - 1];
            }
            strTemp[reverseStr[n].size()] = '\0';
            reverseStr[n] = strTemp;
        }
        
        string strReverse;
        for(int i = 0; i < reverseStr.size(); i++)
        {
            strReverse += reverseStr[i];
            strReverse += " ";
        }
        strReverse[s.size()] = '\0';
        
        return strReverse;
    }
};
