class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int, int> map;
        for(int n = 0; n < nums.size(); n++)
        {
            map[nums[n]] ++;
        }
        
        vector<int> vec;
        for(auto v : nums)
        {
            if(map[v] == 1)
            {
                vec.emplace_back(v);
            }
        }
        
        return vec;
    }
};
