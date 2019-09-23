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
    
    bool find(vector<int> &other, int nnum)
    {
        for(int n = 0; n < other.size(); n++)
        {
            if(other[n] == nnum)
                return true;
        }

        return false;
    }
    
    void SearchTree(TreeNode* root, vector<int> &other, bool& bfind, int k)
    {
        if(bfind == true)
        {
            return;
        }
        if(root == nullptr)
        {
            return;
        }
        else
        {
            // 防止重复，先查vector内有没有符合的值，再把值写入vector中
            bool bf = find(other, (k - root->val));
            other.emplace_back(root->val);
            if(bf == true)
            {
                bfind = true;
                return;
            }
            
            if((root->right != nullptr) &&(root->left != nullptr))
            {
                SearchTree(root->left, other, bfind, k);
                SearchTree(root->right, other, bfind, k);
            }
            else if(root->right != nullptr)
            {
                SearchTree(root->right, other, bfind, k);
            }
            else if(root->left != nullptr)
            {
                SearchTree(root->left, other, bfind, k);
            }
        }
        
    }
    
public:
    bool findTarget(TreeNode* root, int k) {
        vector<int> other;
        bool bfind = false;
        
        SearchTree(root, other, bfind, k);
        
        return bfind;
    }
    
};
