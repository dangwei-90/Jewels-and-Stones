class Solution {
public:
    vector<int> shortestToChar(string S, char C) {
        vector<int> nshort;
        // 添加游标值
        int nmove = -1;
        bool nFirstFind = 0;
        for(int n = 0; n < S.size(); n++)
        {
            int nfindbegin = S.find(C, n) - n;
            if(nmove == -1 && nfindbegin == -1)
            {
                // 不存在，给nshort赋值，返回 0
            }
            
            if(nmove == -1 && nfindbegin == 0)
            {
                // 找到第一个符号，开始标识游标值
                nmove = 0;
                nFirstFind = 1;
            }
            
            if(nFirstFind == 1)
            {
                nmove += 1;

                if(nfindbegin <= nmove && nfindbegin >= 0)
                {
                    // 右距离小于等于左距离，不做处理
                    nshort.push_back(nfindbegin);
                    nmove = nfindbegin;
                }
                else
                {
                    nshort.push_back(nmove);                  
                }
            }
            else
            {
                nshort.push_back(nfindbegin);
            }

        }
        
        return nshort;
    }
};
