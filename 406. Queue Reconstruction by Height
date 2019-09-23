class Solution {
public:
    vector<pair<int, int>> reconstructQueue(vector<pair<int, int>>& people) {
        vector<pair<int, int>> rec;
        rec.clear();
        sort(people.begin(), people.end(), cmp);
        
        for(auto au : people)
        {
            if(au.second >= rec.size())
            {
                rec.insert(rec.end(), au);
            }
            else
            {
                rec.insert(rec.begin() + au.second, au);   
            }
        }
        
        return rec;
    }
    
    static bool cmp(pair<int, int> a, pair<int, int> b)
    {
        if(a.first == b.first)
        {
            if(a.second < b.second)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else
        {
            if(a.first > b.first)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
};
