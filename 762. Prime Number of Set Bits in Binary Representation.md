bool isprimenum(int num)
{
    // 排除1
	if (num == 1)
	{
		return false;
	}

    
    for(int n = 2; n <= sqrt(num) ; n++)
    {
        if(num % n == 0)
        {
            return false;
        }
    }
    
    return true;
}

class Solution {
public:
    int countPrimeSetBits(int L, int R) {
        int ncount = 0;
        for(int n = L; n <= R; n++)
        {
            int nOneNum = 0;
            int nNum = n;
            while(nNum != 0)
            {
                if(nNum & 1 != 0)
                {
                    nOneNum++;
                }
                nNum = nNum >> 1;
                /*
                if(nNum%2 != 0)
                {
                    nOneNum++;
                }
                nNum = nNum/2;
                */
            }
            bool bPrime = isprimenum(nOneNum);
            if(bPrime == true)
            {
                ncount ++;
            }
        }
        
        return ncount;
    }
};
