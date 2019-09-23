class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        if((r * c) != (nums.size() * nums[0].size()))
        {
            return nums;
        }
        
        vector<vector<int>> reshape;
        vector<int> temp;
        for(int n = 0; n < nums.size(); n++)
        {
            for(int m = 0; m < nums[0].size(); m++)
            {
                temp.emplace_back(nums[n][m]);
            }
        }
        
        int nt = 0;
        for(int i = 0; i < r ; i++)
        {
		    vector<int> column;
            for (int j = 0; j < c; j++)
            {
                column.emplace_back(temp[nt]);
                nt++;
            }
            reshape.emplace_back(column);
        }
        
        return reshape;
    }
};
