class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        // nums.size()个正数,这个正数对应的位置的值置为负,那么不是负数的位置，则是丢失的数字
        vector<int> disnum;
        for(int n = 0; n < nums.size(); n++)
        {
            int nVal = abs(nums[n]) - 1;
            nums[nVal] = nums[nVal] > 0 ? -nums[nVal] : nums[nVal];
        }
        for(int m = 0; m < nums.size(); m++)
        {
            if(nums[m] > 0)
            {
                disnum.emplace_back(m+1);
            }
        }
        
        return disnum;
        
        
        // error
        /*
        vector<int> disnum;
        for(int n = 1; n <= nums.size(); n++)
        {
            vector<int>::iterator ite = find(nums.begin(), nums.end(), n);
            if(ite == nums.end())
            {
                disnum.emplace_back(n);
            }
        }
    
        return disnum;
        */
    }
};
