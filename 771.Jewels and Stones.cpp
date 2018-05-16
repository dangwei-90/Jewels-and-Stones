class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int nCount = 0;
        for(int n = 0; n < S.length(); n++ )
        {
            for(int j = 0; j< J.length(); j++)
            {
                if(S[n] == J[j])
                {
                    nCount ++;
                }
            }
        }
        return nCount;
    } 
};
