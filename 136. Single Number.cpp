class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> map;
        for(int n = 0; n < nums.size(); n++)
        {
            map[nums[n]] = map[nums[n]] + 1;
        }
            
        for(auto vec : nums)
        {
            if(map[vec] == 1)
            {
                return vec;
            }
        }
    }
};
