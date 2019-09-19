/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int minDiffInBST(TreeNode* root) 
    {
        int nMin = -1; 
        if(root == nullptr)
        {
            return 0;
        }
        vector<int> vec;
        
        // 根据二叉查找树特性，中序遍历，上一个值和当前值比较，找到最小值即可
        FindMinDif(root, vec);
        
        for(int n = 1; n < vec.size(); n++)
        {
            if(nMin == -1)
            {
                nMin = vec[n] - vec[n-1];
            }
            else
            {
                if(nMin > (vec[n] - vec[n-1]))
                {
                    nMin = vec[n] - vec[n-1];
                }
            }
        }
        
        return nMin;
    }
    
    // 中序遍历
    void FindMinDif(TreeNode* root, vector<int> & vec)
    {                     
        if(root == nullptr)
        {
            return ;
        }
               
        if(root->left != nullptr)
        {
            FindMinDif(root->left, vec);
        }
        
        vec.emplace_back(root->val);
        
        if(root->right != nullptr)
        {
            FindMinDif(root->right, vec);
        }
    }
    
    // 一次遍历fail
    void FindMinDif(TreeNode* root, int& nMin, int nLast)
    {                     
        if(root == nullptr)
        {
            return ;
        }
        
        
        if(root->left != nullptr)
        {
            int nTemp = abs(root->val - nLast);
            if(nMin == -1)
            {
                nMin = 0;
            }
            else if(nMin == 0)
            {
                nMin = nTemp;
            }
            if(nTemp < nMin)
            {
                nMin = nTemp;
            }
            FindMinDif(root->left, nMin, root->val);
        }
        
        if(root->right != nullptr)
        {
            int nTemp = abs(root->val - nLast);
            if(nMin == -1)
            {
                nMin = 0;
            }
            else if(nMin == 0)
            {
                nMin = nTemp;
            }
            if(nTemp < nMin)
            {
                nMin = nTemp;
            }
            FindMinDif(root->right, nMin, root->val);
        }
    }
    
};
