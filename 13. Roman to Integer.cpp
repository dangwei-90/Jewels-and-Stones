class Solution {
public:
    int romanToInt(string s) {
        int nSum = 0;
        for(int n = 0; n < s.size(); n++)
        {
            if(s[n] == 'C')
            {
                if(s[n + 1] == 'D' && (n < s.size() - 1))
                {
                    nSum = nSum + 400;
                    n ++;
                }
                else if(s[n + 1] == 'M' && (n < s.size() - 1))
                {
                    nSum = nSum + 900;
                    n ++;
                }
                else
                {
                    nSum = nSum + 100;
                }
            }
            else if(s[n] == 'X')
            {
                if(s[n + 1] == 'L' && (n < s.size() - 1))
                {
                    nSum = nSum + 40;
                    n ++;
                }
                else if(s[n + 1] == 'C' && (n < s.size() - 1))
                {
                    nSum = nSum + 90;
                    n ++;
                }
                else
                {
                    nSum = nSum + 10;
                }
            }
            else if(s[n] == 'I')
            {
                if(s[n + 1] == 'V' && (n < s.size() - 1))
                {
                    nSum = nSum + 4;
                    n ++;
                }
                else if(s[n + 1] == 'X' && (n < s.size() - 1))
                {
                    nSum = nSum + 9;
                    n ++;
                }
                else
                {
                    nSum = nSum + 1;
                }
            }
            else if(s[n] == 'V')
            {
                nSum = nSum + 5;
            }
            else if(s[n] == 'L')
            {
                nSum = nSum + 50;
            }
            else if(s[n] == 'D')
            {
                nSum = nSum + 500;
            }
            else if(s[n] == 'M')
            {
                nSum = nSum + 1000;
            }
        }
        
        return nSum;
    }
};
