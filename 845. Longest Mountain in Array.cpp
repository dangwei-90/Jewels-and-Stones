class Solution {
public:
    int longestMountain(vector<int>& A) {
        int nlongest = 0;
        int nup = 0;
        int ndown = 0;
        
        if(A.size() <= 2)
        {
            return 0;
        }
        
        for(int n = 0; n < A.size()-1; n++)
        {           
            if(A[n] == A[n+1])
            {
                if(nup == 0)
                {
                    continue;
                }
                else if(ndown == 0)
                {
                    nup = 0;
                    continue;
                }
                else if(ndown >= nup)
                {
                    int temp = 0;
                    temp = nup + ndown + 1;
                    if(temp > nlongest)
                    {
                        nlongest = temp;
                    }
                    ndown = nup = 0;
                }
                else
                {
                    int temp = 0;
                    temp = nup + ndown + 1;
                    if(temp > nlongest)
                    {
                        nlongest = temp;
                    }
                    ndown = nup = 0;
                }
            }
            else if(A[n+1] > A[n])
            {
                if(nup == 0)
                {
                    nup++;
                    ndown = 0;
                    continue;
                }
                else if(ndown == 0)
                {
                    nup++;
                    continue;
                }
                else
                {
                    int temp = 0;
                    temp = nup + ndown + 1;
                    if(temp > nlongest)
                    {
                        nlongest = temp;
                    }
                    ndown = 0;
                    nup = 1;
                }
            }
            else if(A[n+1] < A[n])
            {
                if(nup == 0)
                {
                    ndown = 0;
                    continue;
                }
                else if(ndown == 0)
                {                   
                    ndown++;
                    int temp = 0;
                    temp = nup + ndown + 1;
                    if(temp > nlongest)
                    {
                        nlongest = temp;
                    }
                    continue;
                }
                else
                {
                    ndown++;
                    int temp = 0;
                    temp = nup + ndown + 1;
                    if(temp > nlongest)
                    {
                        nlongest = temp;
                    }
                    continue;
                }
            }
        }
        
        return nlongest;
    }
};
