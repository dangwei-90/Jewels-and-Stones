class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        using namespace std;
        
        if(nums.size() == 1)
        {
            return 1;
        }
        
        vector<int> findnum;
        int nMax = 0;
        unordered_map<int, int> map;
        for(int n = 0; n < nums.size(); n++)
        {
            map[nums[n]] ++;
            int nNow = map[nums[n]];
            if(nNow > nMax)
            {
                nMax = nNow;
            }
            else
            {
                // Nothing;
            }
        }
        
        if(nMax == 1)
        {
            return 1;
        }
                    
        unordered_map<int, int>::iterator itmap;
        int nDegree = -1;
        for(itmap = map.begin(); itmap != map.end(); itmap++)
        {
            int nBegin = -1;
            int nEnd = -1;
            
            if(itmap->second != nMax)
            {
                continue;
            }          
                      
            for(int i = 0; i < nums.size(); i++)
            {
                if(itmap->first == nums[i])
                {
                    if(nBegin == -1)
                    {
                        nBegin = i;
                    }
                    else
                    {
                        nEnd = i;
                    }  
                }
            }
            
            int nTemp = 0;

            if(nTemp < (nEnd - nBegin) + 1)
            {
                nTemp = nEnd - nBegin + 1;
            }
            
            if(nDegree == -1)
            {
                nDegree = nTemp;
            }
            else
            {
                if(nTemp < nDegree)
                {
                    nDegree = nTemp;
                }
            }
        }
        
        return nDegree;
    }
};
