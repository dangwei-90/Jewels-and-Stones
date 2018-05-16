using namespace std;
class Solution {
    
public:
    int calPoints(vector<string>& ops) {
        vector<int> realNum;
        int nCount = 0;
        int nNow = 0;
        for(int n = 0; n < ops.size(); n++)
        {
            if(ops[n] == "C")
            {
                //int nLen = realNum.size();
                //nNow = -realNum[nLen-1];
                nNow = -realNum.back();
                realNum.pop_back();
            }
            else if(ops[n] == "+")
            {
                int nLen = realNum.size();
                nNow = realNum[nLen-1] + realNum[nLen-2];
                realNum.emplace_back(nNow);
            }
            else if(ops[n] == "D")
            {
                //int nLen = realNum.size();
                //nNow = 2 * realNum[nLen-1];
                nNow = 2 * realNum.back();
                realNum.emplace_back(nNow);
            }
            else
            {
                nNow = stoi(ops[n]);
                realNum.emplace_back(nNow);
            }
            nCount += nNow;
        }
        
        return nCount;
    }
    
};
