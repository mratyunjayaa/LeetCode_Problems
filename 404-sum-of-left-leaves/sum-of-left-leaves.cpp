class Solution {
    long long sum = 0;

    void find(TreeNode* root) {
        if (!root)
            return;

        if (root->left && !root->left->left && !root->left->right)
            sum += root->left->val;

        find(root->left);
        find(root->right);
    }

public:
    int sumOfLeftLeaves(TreeNode* root) {
        if (!root)
            return 0;

        sum = 0;
        find(root);

        return sum;
    }
};