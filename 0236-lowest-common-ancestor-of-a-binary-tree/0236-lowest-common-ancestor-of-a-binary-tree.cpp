class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {

        if (root == nullptr)
            return nullptr;

        if (root == p || root == q)
            return root;

        TreeNode* lefts = lowestCommonAncestor(root->left, p, q);
        TreeNode* rights = lowestCommonAncestor(root->right, p, q);

        if (lefts != nullptr && rights != nullptr)
            return root;

        return (lefts != nullptr) ? lefts : rights;
    }
};
