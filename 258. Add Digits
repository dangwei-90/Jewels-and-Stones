class Solution {
public:
    int addDigits(int num) {
        int nRet = 0;
        if(num < 10)
        {
            return num;
        }
        
        int nTemp = 0;
        while(num != 0)
        {
            nTemp = nTemp + num % 10;
            num = num / 10;
        }
        
        nRet = addDigits(nTemp);
        
        return nRet;
    }
};
