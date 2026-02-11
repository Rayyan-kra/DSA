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
    bool exist(TreeNode* root,TreeNode* temp){
        if(!root)return false ;
        if(root==temp)return true;
        return (exist(root->left,temp))
        or (exist(root->right,temp));
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if((root==p or root==q)) return root;
        if(exist(root->left,p) && exist(root->right,q))return root;
        else if(exist(root->left,q) && exist(root->right,p))return root;
        else if(exist(root->left,p) && exist(root->left,p))return lowestCommonAncestor(root->left,p,q);
        else if(exist(root->right,p) && exist(root->right,p))return lowestCommonAncestor(root->right,p,q);
        return root;
    }
};