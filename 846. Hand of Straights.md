class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int W) {
        if(hand.size() % W != 0)
        {
            return false;
        }
        
        multiset<int> ms;
        unordered_map<int, int> map;
        for(int n = 0; n < hand.size(); n++)
        {
            ms.insert(hand[n]);
            map[hand[n]] ++;
        }
        
        multiset<int>::iterator it;  
        int i = 0;
        for (it = ms.begin(); it != ms.end(); it++)  
        {  
            hand[i] = *it;
            i++;  
        }  
        
        int nadd = 0;
        while(nadd != hand.size())
        {
            if(hand[nadd] < 0)
            {
                nadd++;
                continue;
            }

            int nTemp = hand[nadd];
            for(int k = nTemp; k < W+nTemp; k++)
            {
                if(map[k] >= 1)
                {
                    map[k] --;
                }
                else
                {
                    return false;
                }
                for(int j = 0; j < hand.size(); j++)
                {
                    if(hand[j] == k)
                    {
                        hand[j] = -1;
                        break;
                    }
                }
            }

            nadd++;
        }
        
        return true;
    }
};
