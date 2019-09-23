class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ret;
        for(int n = 0; n < numbers.size(); n++)
        {
            for(int m = n + 1; m < numbers.size(); m++)
            {
                if(numbers[n] + numbers[m] == target)
                {
                    ret.emplace_back(n + 1); 
                    ret.emplace_back(m + 1);
                    
                    return ret;
                }
                
                if(numbers[n] + numbers[m] > target)
                {
                    break;
                }
            }
        }
        
        return ret;
    }
};
