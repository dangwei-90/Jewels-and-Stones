class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
        vector<int> greater;
        for(int n = 0; n < findNums.size(); n++)
        {
            bool bfind = false;
            int nNum = findNums[n];
            vector<int>::iterator ifind = find(nums.begin(), nums.end(), findNums[n]);
            int m = 0;
            for(m = distance(nums.begin(), ifind) ; m < nums.size(); m++)
            {
                if(nums[m] > findNums[n])
                {
                    bfind = true;
                    break;
                }
            }
            
            if(bfind == true)
            {
                greater.emplace_back(nums[m]);
            }
            else
            {
                greater.emplace_back(-1);
            }
        }
        
        return greater;
    }
};
