class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        char* chLetters[] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---",
                                "-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-",
                                "..-","...-",".--","-..-","-.--","--.."};
    
        vector<string> vecdifletter;

        for(int n = 0; n < words.size(); n++)
        {
            string str;
            for(int m = 0; m < words[n].length(); m++)
            {
                string strtemp = chLetters[(words[n][m] - 'a')];

                str = str + strtemp;
            }

            int nFind = 0;
            for(int i = 0; i < vecdifletter.size(); i++)
            {
                if(vecdifletter[i].compare(str) == 0)
                {
                    nFind = 1;
                    break;
                }
            }
            if(nFind == 0)
            {
                vecdifletter.push_back(str);
            }
        }

        return vecdifletter.size();
        
    }
};
