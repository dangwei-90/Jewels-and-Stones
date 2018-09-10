class Solution {
public:
    bool isMonotonic(vector<int>& A) {
        bool nRet = true;
        int nsign = 0;
        
        if(A.size() <= 1)
        {
            return true;
        }
        
        for(int n = 0; n < A.size()-1; n++)
        {
            if(A[n] == A[n+1] && nsign == 0)
            {
                continue;
            }
            else if(A[n] > A[n+1])
            {
                if(nsign == 0 || nsign == -1)
                {
                    nsign = -1;
                    continue;
                }
                else
                {
                    return false;
                }
            }
            else if(A[n] < A[n+1])
            {
                if(nsign == 0 || nsign == 1)
                {
                    nsign = 1;
                    continue;
                }
                else
                {
                    return false;
                }
            }         
        }
        
        return true;
    }
};
