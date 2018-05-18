class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> move;
        int nZero = 0;
        for(int n = 0; n < nums.size(); n++)
        {
            if(nums[n] == 0)
            {
                nZero++;
            }
            else
            {
                move.emplace_back(nums[n]);
            }
        }
        for(int m = 0; m < nZero; m++)
        {
            move.emplace_back(0);
        }
        
        nums = move;
    }
};
