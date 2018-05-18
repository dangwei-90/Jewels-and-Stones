class Solution {
public:
    bool rotateString(string A, string B) {
        // 不要遗漏 "" 的情况
        if(A == "" && B == "")
        {
            return true;
        }
        
        for(int n = 0; n < A.size(); n++)
        {
            string nTemp = A.substr(n, A.size()-n) + A.substr(0, n);
            if(nTemp == B)
            {
                return true;
            }
        }
        
        return false;
    }
};
