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
    TreeNode* convertBST(TreeNode* root) {
        // 二叉查找树特点：左子树结点值小于root key
        int nSum = 0;
        conBST(root, nSum);
        return root;
               
        /* my solution error memory limit exceeded
        vector<int> vec;
        readBST(root, vec);
        conBST(root, vec);
        */
        return root;
    }
    
    
    // 中序遍历
    void conBST(TreeNode* root, int &nSum) 
    {
        if(root == nullptr)
        {
            return;
        }

        conBST(root->right, nSum);
        nSum = nSum + root->val;
        root->val = nSum;
        conBST(root->left, nSum);

    }
    
    // 遍历树
    void readBST(TreeNode* root, vector<int>& vec) 
    {
        if(root == nullptr)
        {
            return;
        }
        
        vec.emplace_back(root->val);
        
        if((root->left != nullptr) && (root->right != nullptr))
        {
            readBST(root->left, vec);
            readBST(root->right, vec);
        }
        else if(root->left == nullptr)
        {
            readBST(root->right, vec);
        }
        else if(root->right == nullptr)
        {
            readBST(root->left, vec);
        }
    }
    
    // 修改树
    void conBST(TreeNode* root, vector<int> vec) 
    {
        if(root == nullptr)
        {
            return;
        }
        
        root->val = nSum(root->val, vec);
        
        if((root->left != nullptr) && (root->right != nullptr))
        {
            conBST(root->left, vec);
            conBST(root->right, vec);
        }
        else if(root->left == nullptr)
        {
            conBST(root->right, vec);
        }
        else if(root->right == nullptr)
        {
            conBST(root->left, vec);
        }
    }
    
    // 取和
    int nSum(int rootval, vector<int> vec)
    {
        int nSum = rootval;
        for(int i = 0; i < vec.size(); i++)
        {
            if(vec[i] > rootval)
            {
                nSum += vec[i];
            }
        }
        return nSum;
    }
};
