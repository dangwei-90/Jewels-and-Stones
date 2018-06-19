class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int nCount = 0;
        unordered_set<char> setstr(J.begin(), J.end());
        for(char ch : S)
        {
            if(setstr.count(ch) > 0)
            {
                nCount++;
            }
        }
        return nCount;
        
        // my solution
        /*
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
        */
    } 
};
