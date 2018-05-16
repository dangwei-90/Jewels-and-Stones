class Solution {
public:
    string toGoatLatin(string S) {
        string strGoat = "";
        int nfind = 0;
        nfind = S.find(" ");
        int nTemp = 0;
        int nA = 1;
        int nwhile = 2;
        while(nwhile > 0)
        {
            if(nfind == -1)
            {
                nwhile = 0;
                nfind = S.size();
            }
            
            // 跳过空格
            string strTemp = S.substr(nTemp, nfind - nTemp);
            string straeiou = "aeiouAEIOU";
            int nFindAEIOU = straeiou.find(strTemp[0]);
            if(nFindAEIOU >= 0)
            {
                strGoat = strGoat + strTemp + "ma";
                for(int n = 0; n < nA; n++)
                {
                     strGoat = strGoat + "a";
                }
                strGoat = strGoat + " ";
                nA ++;
            }
            else
            {
                strGoat = strGoat + strTemp.substr(1, strTemp.size()-1) + strTemp[0] + "ma";
                for(int n = 0; n < nA; n++)
                {
                     strGoat = strGoat + "a";
                }
                strGoat = strGoat + " ";
                nA ++;
            }
            nTemp = nfind + 1;
            nfind = S.find(" ", nfind + 1);
            
            if(nfind == -1 || nwhile == 1)
            {
                nwhile --;
            }
        }
        
        strGoat[strGoat.size() - 1] = '\0';
        
        return strGoat;
    }
};
