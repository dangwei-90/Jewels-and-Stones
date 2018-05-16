class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string S) {
        // width 26个数字对应26个字母
        vector<int> ret;
        int nRows = 1;
        int nColumn = 0;
        int nRowTotalNum = 0;
        for(int n = 0; n < S.size(); n++)
        {
            nRowTotalNum = nRowTotalNum + widths[(S[n] - 'a')];
            if(nRowTotalNum > 100)
            {
                nRowTotalNum = widths[(S[n] - 'a')];
                nRows += 1;
            }
        }
        
        ret.push_back(nRows);
        ret.push_back(nRowTotalNum);
        
        return ret;
    }
};
