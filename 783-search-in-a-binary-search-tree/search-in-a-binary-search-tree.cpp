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
    void preorder(TreeNode* root , int val , TreeNode* &head){
        if(!root) return ;
        if(root->val==val){
            head = root;
            return ;
        }
        preorder(root->left , val ,head ) ; 
        preorder(root->right , val,head ) ;
    }
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if(!root) return nullptr ;
        TreeNode* head = nullptr;
        preorder(root , val , head);
        return head ;
    }
};