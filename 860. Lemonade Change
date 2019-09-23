class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int n5 = 0;
        int n10 = 0;
        for(int n = 0; n < bills.size(); n++)
        {
            if(bills[n] == 5)
            {
                n5++;
            }
            else if(bills[n] == 10)
            {
                if(n5 > 0)
                {
                    n5--;
                    n10++;
                }
                else
                {
                    return false;
                }
            }
            else if(bills[n] == 20)
            {
                if(n10 > 0 && n5 > 0)
                {
                    n5--;
                    n10--;
                }
                else if(n10 == 0 && n5 > 2)
                {
                    n5 = n5 - 3;
                }
                else
                {
                    return false;
                }
            }
        }
        
        return true;
    }
};
