class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) 
    {
        vector<int> nselfnum;
        for(int n = left ; n <= right; n++)
        {
            bool bReal = 1;
            string str = to_string(n);
            for(int i = 0; i< str.size(); i++)
            {
                int neach = str[i] - 48;
                if(neach == 0)
                {
                    bReal = 0;
                    break;
                }
                
                if((n % neach) == 0)
                {
                    continue;
                }
                else
                {
                    bReal = 0;
                    break;
                }
            }
            if(bReal == 1)
            {
                nselfnum.push_back(n);
            }
        }
        
        return nselfnum;
    }
};
