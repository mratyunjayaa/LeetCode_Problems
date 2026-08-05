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
    void bottom(TreeNode* root , int level , stack<int>&st){
        if(!root) return ;

        if(level == st.size()) st.push(root->val) ;
        bottom(root->left , level + 1 , st );
        bottom(root->right , level + 1 , st ); 
    }
public:
    int findBottomLeftValue(TreeNode* root) {
        if(!root) return 0 ;
        stack<int>st;
        bottom(root , 0 , st) ;
        return st.top();
    }
};