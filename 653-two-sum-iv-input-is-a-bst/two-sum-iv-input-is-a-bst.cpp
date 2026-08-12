
class Solution {
    void inorder(TreeNode* root ,vector<int>&ans){
        if(root==NULL) return ;
        inorder(root->left , ans);
        ans.push_back(root->val);
        inorder(root->right , ans);
    }
public:
    bool findTarget(TreeNode* root, int k) {
        if(!root->left && !root->right) return false;
        vector<int>ans ;
        // if(ans.size() < 2 ) return false ;
        inorder(root , ans);
        int i = 0 , j = ans.size()-1 ;
        while(i<j){
            if(ans[i]+ans[j]==k) return true ;
            else if(ans[i] + ans[j] < k) i++;
            else j--;
        }
        return false ;
    }
};