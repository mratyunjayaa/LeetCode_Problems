
class Solution {
    vector<int>v;
    void inorder(TreeNode * root){
        if(root==NULL) return ;
        inorder(root->left);
        v.push_back(root->val);
        inorder(root->right);
    }
public:
    int getMinimumDifference(TreeNode* root) {
        if(root ==NULL) return 0 ;

        inorder(root);

        int low = INT_MAX;
        for(int i =  1; i < v.size() ; i++){
           low = min(low , v[i] -v[i-1] );
        }
        return low;
    }
};