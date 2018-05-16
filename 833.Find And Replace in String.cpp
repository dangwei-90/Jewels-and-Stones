class Solution {
public:
    string findReplaceString(string S, vector<int>& indexes, vector<string>& sources, vector<string>& targets) {
        string strret;
        
        
        for (int m = 0; m < S.size(); m++)
        {
            int n = 0;
            int nfindnum = 0;
            for (n = 0; n < indexes.size(); n++)
            {
                if (indexes[n] == m)
                {
                    int nfind = S.find(sources[n], indexes[n]);
                    if (nfind == indexes[n])
                    {
                        strret = strret + targets[n];
                        m = m + sources[n].size() - 1;
                        nfindnum = 1; 
                        break;
                    }
                }
            }
            if (nfindnum == 1)
            {

            }
            else
            {
                strret = strret + S[m];
            }

        }
        
        /*
        unordered_map<int, string> replace;
        for(int n = 0; n < indexes.size(); n++)
        {
            int nfind = S.find(sources[n], indexes[n]);
            if(nfind == indexes[n])
            {
                replace[n] = targets[n];
            }
        }
        
        for(int m = 0; m < S.size(); m++)
        {
            unordered_map<int, string>::const_iterator got;
            got = replace.find(m);
            if(got == replace.end())
            {
                strret = strret + S[m];
            }
            else
            {
                strret = strret + replace[m]; 
                m = m + sources[m].size() - 1;
                
            }
        }
          
        */
        
        return strret;
    }
};
