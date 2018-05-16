class Solution {
public:
    bool judgeCircle(string moves)
    {
        int x = 0;
        int y = 0;
        for(int n = 0; n < moves.size(); n++)
        {
            if(moves[n] == 'R')
            {
                x = x + 1;
            }
            else if(moves[n] == 'L')
            {
                x = x - 1;
            }
            else if(moves[n] == 'U')
            {
                y = y + 1;
            }
            else if(moves[n] == 'D')
            {
                y = y - 1;
            }
            else
            {
                
            }    
        }
        
        if(x == 0 && y == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
