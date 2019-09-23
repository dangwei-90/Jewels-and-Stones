class Solution {
public:
    bool buddyStrings(string A, string B) {
        // 长度不一致，或者存在0
        if(A.size() != B.size())
        {
            return false;
        }
        else if(A.size() <= 1)
        {
            return false;
        }
        
        // 完全相等时，判断有没有重复元素
        if(A == B)
        {
            for(int n = 0; n < A.size(); n++)
            {
                for(int m = n+1; m < A.size(); m++)
                {
                    if(A[n] == A[m])
                    {
                        return true;
                    }
                }
            }
            
            return false;
        }
        
        // 不相等的字符串
        int nDifNum = 0;
        int nDifFirst = -1;
        int nDifSecond = -1;
        for(int i = 0; i < A.size(); i++)
        {
            if(A[i] != B[i])
            {
                nDifNum ++;
                if(nDifNum > 2)
                {
                    return false;
                }
                else if(nDifNum == 1)
                {
                    nDifFirst = i;
                }
                else if(nDifNum == 2)
                {
                    nDifSecond = i;
                }
            }
        }
        if(nDifNum != 2)
        {
            return false;
        }
        if((A[nDifFirst] == B[nDifSecond]) && (A[nDifSecond] == B[nDifFirst]) )
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
