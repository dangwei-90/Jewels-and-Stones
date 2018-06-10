class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int nStart = seats[0];
        int nend = seats[seats.size()-1];
        int nLong = 0;
        int nTemp = 0;
        for(int n = 0; n < seats.size(); n++)
        {
            if(seats[n] == 0)
            {
                nTemp++;
                if(nTemp >= nLong)
                {
                    nLong = nTemp;
                }
                if(nTemp == (n+1))
                {
                    nStart = nTemp;
                }
                if((seats[seats.size()-1] == 0) && (n == seats.size()-1))
                {
                    nend = nTemp;
                }
            }
            else if(seats[n] == 1)
            {
                if(nTemp >= nLong)
                {
                    nLong = nTemp;
                }
                nTemp = 0;
            }           
        }

        nLong = nLong/2 + nLong%2;

        int nMax = 0;
        if(nStart > nend)
        {
            nMax = nStart;
        }
        else
        {
            nMax = nend;
        }
        if(nLong > nMax)
        {
            return nLong;
        }
        else
        {
            return nMax;
        }
    }
};
