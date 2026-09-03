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
     vector<TreeNode*> nodes;
     void inorder(TreeNode* root){
        if(root == NULL)  return ;

        inorder(root->left);
        nodes.push_back(root);
        inorder(root->right);
     }

     TreeNode* build(int low , int high){
        if(low > high){
            return NULL;
        }
        int mid = low+(high-low) / 2 ;

        TreeNode* root = nodes[mid];
        root->left = build(low , mid-1);
        root->right = build(mid+1 , high);
        return root;

     }
public:
    TreeNode* balanceBST(TreeNode* root) {
        inorder(root);
        return build(0 , nodes.size()-1);
    }
};