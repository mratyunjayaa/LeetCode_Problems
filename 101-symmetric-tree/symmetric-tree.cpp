class Solution {
    bool mirror(TreeNode* left , TreeNode* right){
        if(!left && !right ) return true ;
        if(!left && right || !right && left) return false ;
        if(left->val != right->val ) return false ;
        return mirror(left->left , right ->right) 
        && mirror(left->right , right ->left) ;
     }
public:
    bool isSymmetric(TreeNode* root) {
        if(!root) return false ;
        if(!root -> left && !root->right) return true ;
        return mirror(root->left , root->right) ;
    }
};