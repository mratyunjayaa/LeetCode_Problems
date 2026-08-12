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

    TreeNode* solve(vector<int>& preorder, int& i,
                long long low, long long high) {

        if (i == preorder.size())
            return NULL;

        // Current value is not allowed here
        if (preorder[i] <= low || preorder[i] >= high)
            return NULL;

        TreeNode* root = new TreeNode(preorder[i]);
        i++;

        // Construct left subtree
        root->left = solve(preorder, i, low, root->val);

        // Construct right subtree
        root->right = solve(preorder, i, root->val, high);

        return root;
    }

    TreeNode* bstFromPreorder(vector<int>& preorder) {

        int i = 0;

        return solve(preorder, i,
                     LLONG_MIN, LLONG_MAX);
    }
};