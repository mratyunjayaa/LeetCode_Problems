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
void inorder (TreeNode* root , vector<int>&in){
    if(!root) return ;
    inorder(root->left , in );
    in.push_back(root->val);
    inorder(root->right , in) ;
}
TreeNode* build(vector<int>&in , int &i){
    if(i == in.size()) return nullptr;
    TreeNode* root = new TreeNode(in[i++]);
     root->right= build(in, i );
     return root;
}
public:
    TreeNode* increasingBST(TreeNode* root) {
        vector<int>in;
        inorder(root , in ) ;
        if(in.empty()) return {};
        int i = 0 ;
        return build(in ,i );
        
    }
};