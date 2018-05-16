int cmp1(const void * a,const void * b)  
{  
    return (*(int*)a-*(int*)b);//a>b 返回正值  
}

class Solution {
public:

    
    int arrayPairSum(vector<int>& nums) 
    {
        /* 冒泡排序效率太低
        // 冒泡排序
		for (int i = 0; i < nums.size() - 1; i++)
		{
			for (int j = 0; j < nums.size() - 1 - i; j++)
			{
				if (nums[j] > nums[j + 1])
				{
					int ntemp = 0;
					ntemp = nums[j];
					nums[j] = nums[j + 1];
					nums[j + 1] = ntemp;
				}
			}
		}
		// 获取俩俩对应最小值的和
		long nTotal = 0;
		for (int n = 0; n < nums.size(); n++)
		{
			nTotal = nTotal + nums[n];
			n++;
		}
        
        return nTotal;
        */
 
        
        // 使用现成的封装函数 qsort
        int mynums[nums.size()];
        for (int n = 0; n < nums.size(); n++)
		{
			mynums[n] = nums[n];
		}
        
        qsort(mynums, nums.size(), sizeof(int), cmp1);
        
        long nTotal = 0;
		for (int n = 0; n < nums.size(); n++)
		{
			nTotal = nTotal + mynums[n];
			n++;
		}
        return nTotal;
    }
};
