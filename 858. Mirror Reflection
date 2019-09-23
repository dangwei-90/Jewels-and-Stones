class Solution {
public:
    int mirrorReflection(int p, int q) {
        if(p % q == 0)
        {
            int nS = p / q;
            if(nS % 2 == 0)
            {
                return 2;
            }
            else
            {
                return 1;
            }
        }
        
        for(int n = 1; n ; n++)
        {
            if((n * q) % p == 0)
            {
                if(n % 2 == 0)
                {
                    return 2;
                }
                
                int np = (n * q)/p;
                if(np % 2 == 0)
                {
                    return 0;
                }
                else
                {
                    return 1;
                }
            }
            
        }
    }
};
