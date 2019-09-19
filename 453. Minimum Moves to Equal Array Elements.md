class Solution {
public:
    int minMoves(vector<int>& nums) {
        // 题意：每次给n-1个值 +1, 最少多少次所有数字相等
        // 等同于 每次给最大的值减1 ，最少多少次所有数字相等
        int nTime = 0;
        int nMinNum = nums[0];
        for(int n = 1; n < nums.size(); n++)
        {
            if(nums[n] <= nMinNum)
            {
                nTime = nTime + n * abs(nMinNum-nums[n]);
                nMinNum = nums[n];
            }
            else if(nums[n] > nMinNum)
            {
                nTime = nTime + (nums[n] - nMinNum);
            }
        }
        
        return nTime;
    }
};
