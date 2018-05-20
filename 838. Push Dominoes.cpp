class Solution {
public:
    string pushDominoes(string dominoes) {
        int nLastL = -1;
        int nLastR = -1;
        
        for(int n = 0; n < dominoes.size(); n++)
        {
            // 判断 L、R，根据上次的L R位置对之前的数据进行赋值
            if(dominoes[n] == 'L')
            {
                // 前边R更近
                if(nLastR > nLastL)
                {
                    for(int i = 0; i < ((n - nLastR - 1)/2); i++)
                    {
                        dominoes[nLastR + i + 1] = 'R';
                        dominoes[n - i - 1] = 'L';
                    }
                }
                else
                {
                    // 前边是L或者NULL
                    for(int i = 0; i < (n - nLastL - 1); i++)
                    {
                        dominoes[i + nLastL + 1] = 'L';
                    }
                }
                
                nLastL = n;
            }
            
            if(dominoes[n] == 'R')
            {
                // 前边为R
                if(nLastR > nLastL)
                {
                    for(int i = 0; i < (n - nLastR -1); i++)
                    {
                        dominoes[i + nLastR + 1] = 'R';                            
                    }
                }
                
                nLastR = n;
            }
        }
        
        // 最后一位的判断
        if(nLastR > nLastL)
        {
            for(int i = 0; i < (dominoes.size() - nLastR - 1); i++)
            {
                dominoes[i + nLastR + 1] = 'R';
            }
        }
        else
        {
            // L nothing;
        }
        
        return dominoes;
    }
};
