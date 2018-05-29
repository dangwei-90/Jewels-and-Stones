class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int nMax = 0;
        int ntemp = 0;
        for(int n = 0; n < nums.size(); n++)
        {
            if(nums[n] == 1)
            {
                ntemp ++;
            }
            else
            {
                if(nMax < ntemp)
                {
                    nMax = ntemp;
                }
                ntemp = 0;
                if(nMax >= (nums.size() - n))
                {
                    break;
                }
            }
        }
        
        if(nMax < ntemp)
        {
            nMax = ntemp;
        }
        
        return nMax;
    }
};
