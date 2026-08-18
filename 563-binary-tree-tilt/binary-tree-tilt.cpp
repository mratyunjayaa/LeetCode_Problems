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
    long long sum = 0;
    int solve(TreeNode* root){
        if(root == NULL) return 0 ;
        int lh = solve(root->left);
        int rh = solve(root->right);
        sum+= abs(lh-rh);
        return root->val + lh + rh ;
    }
public:
    int findTilt(TreeNode* root) {
         
         solve(root);
         return sum ;
    }
};