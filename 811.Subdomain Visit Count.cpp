class Solution {
public:
    vector<string> subdomainVisits(vector<string>& cpdomains) {
        // 采用unordered_map。重复的string作为键，数量num作为值。
        // string 是键  int 是值
        unordered_map<string, int> domainRecord;
        // 定义输出vector
        vector<string> resDomain;
        
        for(auto domain : cpdomains)
        {
            // 找到空格前后数据
            int nSpace = domain.find(" ");
            // 第 n 个domain，拆分，获取Num
            int nNum = stoi(domain.substr(0, nSpace)); 
            // 第 n 个domain, 拆分，获取字符串
            string strEachDomain = domain.substr(nSpace + 1, domain.size()- nSpace - 1);
            // 从最后一个，开始遍历string 字符串
            for(int i = strEachDomain.size() - 1; i >= 0; i--)
            {
                // 循环找.
                if(strEachDomain[i] == '.')
                {
                    // 找到后，从 i+1 开始，取 size() - i - 1个字符，加 nNum
                    domainRecord[strEachDomain.substr(i + 1, strEachDomain.size() - i - 1)] += nNum;
                }
                else if(i == 0)
                {
                    // i == 0时， 整个 字符串 + nNum
                    domainRecord[strEachDomain.substr(0, strEachDomain.size())] += nNum;
                }
            }

        }
        for(auto domain: domainRecord)
        {
            // second 值，first 键
            resDomain.push_back(to_string(domain.second) + " " + domain.first);
        }
        return resDomain;
    }
};
