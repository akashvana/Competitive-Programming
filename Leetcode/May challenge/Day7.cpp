/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    TreeNode* depth(TreeNode* root, int& val, int h, int& d){
        
        if(!root)
            return NULL;
        if(root->left && root->left->val == val)
        {
            d = h + 1;
            return root;
        }
        if(root->right && root->right->val == val)
        {
            d = h + 1;
            return root;
        }
        
        TreeNode* l = depth(root->left, val, h+1, d);
        if(l)
            return l;
        TreeNode* r = depth(root->right, val,  h+1, d);
        if(r)
            return r;
        return NULL;
    }
    
    
    bool isCousins(TreeNode* root, int x, int y) 
    {
     
        int xDepth = -1;
        int yDepth = -1;
        TreeNode* xParent = depth(root, x, 0, xDepth);
        TreeNode* yParent = depth(root, y, 0, yDepth);
        if(xParent != yParent && xDepth == yDepth)
            return true;
        else return false;      
    }
};