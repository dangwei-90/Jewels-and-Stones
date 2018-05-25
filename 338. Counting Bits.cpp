class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> vec;
        for(int n = 0; n <= num; n++)
        {
            int nTemp = n;
            int nCount = 0;
            while(nTemp != 0)
            {
                if(nTemp%2 == 1)
                {
                    nCount ++;
                }
                nTemp = nTemp/2;
            }
            vec.emplace_back(nCount);
        }
        
        return vec;
    }
};
