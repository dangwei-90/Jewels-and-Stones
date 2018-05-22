class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> map;
        for(int n = 0 ; n < s.size(); n++)
        {
            map[s[n]] ++;
        }
        
        for(int m = 0; m < s.size(); m++)
        {
            if(map[s[m]] == 1)
            {
                return m;
            }
        }
        
        return -1;
    }
};
