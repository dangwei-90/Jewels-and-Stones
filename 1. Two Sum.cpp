class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> twoS;
        for(int n = 0; n < nums.size(); n++)
        {
            for(int m = n+1; m < nums.size(); m++)
            {
                if((nums[n] + nums[m]) == target)
                {
                    twoS.emplace_back(n);
                    twoS.emplace_back(m);
                    
                    return twoS;
                }
            }
        }     
    }
};
