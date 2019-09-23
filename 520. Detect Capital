class Solution {
public:
    bool detectCapitalUse(string word) {
        if(word.size() <= 0)
        {
            return false;
        }
        if(islower(word[0]))
        {
            for(int n = 0; n < word.size(); n++)
            {
                if(!islower(word[n]))
                {
                    return false;   
                }
            }
            
            return true;
        }
        if(isupper(word[0]))
        {
            if(word.size() == 1)
            {
                return true;
            }
            if(isupper(word[1]))
            {
                for(int n = 1; n < word.size(); n++)
                {
                    if(!isupper(word[n]))
                    {
                        return false;
                    }
                }
                return true;
            }
            if(islower(word[1]))
            {
                for(int n = 1; n < word.size(); n++)
                {
                    if(!islower(word[n]))
                    {
                        return false;
                    }
                }
                return true;
            }
        }
    }
};
