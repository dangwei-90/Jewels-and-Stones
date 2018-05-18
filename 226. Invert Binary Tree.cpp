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
    TreeNode* invertTree(TreeNode* root) {
        if(root == nullptr)
        {
            return root;
        }
        if((root->left == nullptr) && (root->right == nullptr))
        {
            return root;
        }
        
        TreeNode* temp;
        temp = root->right;
        root->right = root->left;
        root->left = temp;
        
        root->right = invertTree(root->right);
        root->left = invertTree(root->left);
        
        return root;
    }
};
