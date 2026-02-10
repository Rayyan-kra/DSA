class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if (root == nullptr) return true;
        return issame(root->left, root->right);
    }

    bool issame(TreeNode* left, TreeNode* right) {
        if (left == nullptr || right == nullptr) {
            return left == right;
        }
        if (left->val != right->val) return false;

        return issame(left->left, right->right) &&
               issame(left->right, right->left);
    }
};
