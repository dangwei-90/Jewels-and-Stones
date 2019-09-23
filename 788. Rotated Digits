bool Rotated(int nnum)
{
    bool nb = 0;
    while(nnum != 0)
    {
        int ntemp = nnum % 10; 
        if(ntemp == 2 || ntemp == 5 || ntemp == 6 || ntemp == 9)
        {
            nb = 1;
        }
        else if(ntemp == 3 || ntemp == 4 || ntemp == 7)
        {
            return false;
        }
            
        nnum = nnum / 10;
    }
    
    if(nb == true)
    {
        return true;
    }
    else
    {
        return false;
    }
}



class Solution {
public:
    int rotatedDigits(int N) {
        int nCount = 0;
        for(int n = 1; n <= N; n++)
        {
            if(Rotated(n) == true)
            {
                nCount ++;
            }
        }
        
        return nCount;
    }
};
