class Solution {
    void right(TreeNode * root , int level , vector<int>&ans){
        if(!root) return ;

        if(level == ans.size()){
            ans.push_back(root->val) ;
        }
        right(root->right , level + 1 , ans);
        right(root->left , level + 1 , ans);
    }
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans ; 
        if(!root) return ans ;

        right(root , 0 , ans);
        return ans ;
    }
};