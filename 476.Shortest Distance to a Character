class Solution {
public:
    int findComplement(int num) {
        vector<int> complementnum;
        while((num/2) != 0)
        {
            complementnum.push_back(num%2);
            num = num/2;
        }
        complementnum.push_back(num%2);
        
        int nCount = 0;
        for(int n = complementnum.size() - 1; n >= 0; n--)
        {
            if(complementnum[n] == 0)
            {
                nCount = nCount << 1;
                nCount += 1;
            }
            else
            {
                nCount = nCount << 1;
            }
        }
        
        return nCount;
    }
};
