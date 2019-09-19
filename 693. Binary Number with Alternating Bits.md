class Solution {
public:
    bool hasAlternatingBits(int n) {
        if(n == 0 || n == 1)
        {
            return true;
        }
        
        int nO = n%2;
        n = n/2;
        
        while(1)
        {
            int ntemp = n%2;
            if(ntemp == nO)
            {
                return false;
            }
            nO = ntemp;
            n = n/2;
            
            if(n == 0)
            {
                ntemp = n%2;
                if(ntemp == nO)
                {
                    return false;
                }
                nO = ntemp;
                n = n/2;
                break;
            }
        }
        
        return true;
    }
};
