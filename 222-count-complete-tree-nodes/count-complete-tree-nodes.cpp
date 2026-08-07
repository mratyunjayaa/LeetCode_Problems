
class Solution {
      int left(TreeNode* root){
        int h = 0 ;
        while(root){
            h++;
            root = root->left ;
        }
        return h ;
      }
      int right(TreeNode* root){
        int h = 0 ;
        while(root){
            h++;
            root = root->right ;
        }
        return h ;
      }
public:
    int countNodes(TreeNode* root) {
        if(!root) return 0;
        
        int lh = left(root);
        int rh = right(root);
        if(lh==rh) return (1<<lh) - 1 ;
        return 1 + countNodes(root->left) + countNodes(root->right) ;
    }
};