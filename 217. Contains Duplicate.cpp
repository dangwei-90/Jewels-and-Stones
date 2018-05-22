class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> map;
        for(int n = 0; n < nums.size(); n++)
        {
            map[nums[n]] ++;
            if(map[nums[n] == 2])
            {
                return true;
            }
        }
            
        return false;
    }
};
