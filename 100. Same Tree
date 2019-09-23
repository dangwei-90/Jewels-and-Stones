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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        bool bisSame = true;
        isSame(p, q, bisSame);
        
        return bisSame;
    }
    
    
    void isSame(TreeNode* p, TreeNode* q, bool &bisSame)
    {
        if(bisSame == false)
        {
            return ;
        }

        if(p == nullptr && q == nullptr)
        {
            return;
        }
        else if(p == nullptr || q == nullptr)
        {
            bisSame = false;
            return;
        }
        if(p->val != q->val)
        {
            bisSame = false;
            return;
        }
        if(p->right == nullptr && q->right == nullptr && p->left == nullptr && q->left == nullptr)
        {
            return;
        }
        else if(p->right == nullptr && q->right == nullptr && p->left != nullptr && q->left != nullptr)
        {
            isSame(p->left, q->left, bisSame);
        }
        else if(p->right != nullptr && q->right != nullptr && p->left == nullptr && q->left == nullptr)
        {
            isSame(p->right, q->right, bisSame);
        }
        else if(p->right != nullptr && q->right != nullptr && p->left != nullptr && q->left != nullptr)
        {
            isSame(p->right, q->right, bisSame);    
            isSame(p->left, q->left, bisSame);
        }
        else
        {
            bisSame = false;
            return;   
        }
    }
};
