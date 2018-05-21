class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        // set 不允许重复值，且从小到大排序
        set<int> se(nums1.begin(), nums1.end()), se2;
        for(auto au : nums2)
        {
            if(se.count(au) > 0)
            {
                se2.insert(au);
            }
        }
        
        return vector<int>(se2.begin(), se2.end());
    }
};
