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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> vecaver;
        queue<TreeNode*> bfstree;
        if(root == nullptr)
        {
            return vecaver;
        }
        bfstree.push(root);
               
        while(!bfstree.empty())
        {            
            double nColumnAver = 0;
            // 当前层数的结点数量
            int nsize = bfstree.size();
            double nSum = 0;
            
            for(int n = 0; n < nsize; n++)
            {
                // 取出头一个元素
                TreeNode* temp = bfstree.front();
                bfstree.pop();
                // 如果存在左右结点，从左到右依次放入queue
                if(temp->left != nullptr)
                {
                    bfstree.push(temp->left);
                }
                if(temp->right != nullptr)
                {
                    bfstree.push(temp->right);
                }
                nSum = nSum + temp->val;
            }
            
            nColumnAver = (double)nSum/nsize;
            vecaver.emplace_back(nColumnAver);
        }
        
        return vecaver;
    }
};
