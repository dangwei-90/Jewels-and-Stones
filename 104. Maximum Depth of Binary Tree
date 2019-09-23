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
    int maxDepth(TreeNode* root) {
        int nMaxDepth = 0;
        if(root == nullptr)
        {
            // 空树
            return 0;
        }
        
        int nLeft = 0;
        int nRight = 0;

        // 只要找到，则加一层
        nLeft = maxDepth(root->left) + 1;
        nRight = maxDepth(root->right) + 1;
        
        return (nLeft > nRight ? nLeft : nRight);
    }
};
