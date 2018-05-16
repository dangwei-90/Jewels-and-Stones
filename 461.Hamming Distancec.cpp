class Solution {
public:
    int hammingDistance(int x, int y) {
        int nTemp = x^y;
        int nCount = 0;
        while(nTemp > 0)
        {
            nCount = nCount + (nTemp&1);
            nTemp = nTemp >> 1;
        }
        
        return nCount;
    }
};
