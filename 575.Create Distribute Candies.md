class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        
        if(candies.size()%2 != 0)
        {
            return -1;
        }
        
        unordered_map<int, int> mCan;
        int ndis = 0;
        for(auto a : candies)
        {
            mCan[a] = mCan[a] + 1;
            if(mCan[a] == 1 && ndis < (candies.size()/2))
            {
                ndis ++;        
            }
               
        }
        return ndis;
    }
};
