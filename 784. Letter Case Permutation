void backtrack(string &strS, int nNum, vector<string> & vec)
{
    // 遍历到最后一位结束，则得到一种情况的字符串结果，回溯结束
    if(nNum == strS.size())
    {
        vec.emplace_back(strS);
        return ;
    }
    
    // 将传入的strS 递归
    backtrack(strS, nNum + 1, vec);
    
    // 如果第nNum-1项为字母,则把该字母的另一种大写/小写情况进行递归
    if(isalpha(strS[nNum]))
    {
        strS[nNum] = isupper(strS[nNum]) ? tolower(strS[nNum]): toupper(strS[nNum]);
        backtrack(strS, nNum + 1 ,vec);
    }
}

class Solution {
public:
    vector<string> letterCasePermutation(string S) {
        vector<string> vec;
        // 采用 回溯算法 递归遍历
        backtrack(S, 0, vec);
        
        return vec;
    }
};
