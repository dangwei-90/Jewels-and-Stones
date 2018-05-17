class Solution {
public:
    double largestTriangleArea(vector<vector<int>>& points) {
        // 面积计算公式 A = (x1(y2-y3) + x2(y3-y1) + x3(y1-y2))/2;
        double nA = 0;
        double ntemp = 0;      
        for(int n = 0; n < points.size(); n++)
        {
            for(int m = n + 1; m < points.size(); m++)
            {
                for(int j = m + 1; j < points.size(); j++)
                {
                    ntemp = abs(((double)(points[n][0]*(points[m][1] - points[j][1]) + points[m][0]*(points[j][1] - points[n][1]) + 
                              points[j][0]*(points[n][1] - points[m][1]))))/2;
                    if(ntemp >= nA)
                    {
                        nA = ntemp;
                    }
                }
            }
        }
        
        return nA;
            
            
    }
};
