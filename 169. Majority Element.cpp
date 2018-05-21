class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> map;
        for(int n = 0; n < nums.size(); n++)
        {
            int ncount = 0;
            map[nums[n]] ++;
            ncount = map[nums[n]];
            if(ncount > (nums.size()/2))
            {
                return nums[n];
            }
        }
    }
};
