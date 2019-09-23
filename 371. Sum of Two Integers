class Solution {
public:
    int getSum(int a, int b) {
        if(a == 0)
        {
            return b;
        }
        
        int nb = a ^ b;
        int na = (a & b) << 1;
        
        return getSum(na, nb);
        
        
        // error
        /*
        if(a > 0)
        {
            for(int n = 1; n <= a; n++)
            {
                b++;
            }  
        }
        else
        {
            for(int n = 1; n <= -a; n++)
            {
                b--;
            }
        }      
        return b;
        */
    }
};
