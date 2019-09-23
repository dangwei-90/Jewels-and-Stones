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
    
    void FindAllLeaf(TreeNode* root, vector<int> &vec)
    {
        if(root == NULL)
        {
            return;
        }
        
        if(root->left == NULL && root->right == NULL)
        {
            vec.emplace_back(root->val);
        }
        else
        {
            FindAllLeaf(root->left, vec);
            FindAllLeaf(root->right, vec);
        }
    }
    
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> vec1;
        vector<int> vec2;
        
        FindAllLeaf(root1, vec1);
        FindAllLeaf(root2, vec2);
        
        if(vec1.size() == 0 || vec2.size() == 0)
        {
            return false;
        }
        else if(vec1.size() != vec2.size())
        {
            return false;
        }
        else
        {
            for(int n = 0; n < vec1.size(); n++)
            {
                if(vec1[n] != vec2[n])
                {
                    return false;
                }
            }
        }
        
        return true;
    }
};
