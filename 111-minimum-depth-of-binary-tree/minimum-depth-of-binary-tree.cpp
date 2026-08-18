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
    int solve(TreeNode * root){
        if(root==NULL) return 0;
        int lh = solve(root->left);
        int rh = solve(root->right);

        if (lh == 0) return 1 + rh;
        if (rh == 0) return 1 + lh;

            return 1 + min(lh, rh);
        }
public:
    int minDepth(TreeNode* root) {
        if(root==NULL) return NULL;
          return solve(root);

    }
};