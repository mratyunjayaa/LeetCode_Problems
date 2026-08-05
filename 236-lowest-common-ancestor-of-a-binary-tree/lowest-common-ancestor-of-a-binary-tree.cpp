
class Solution {
    bool getpath(TreeNode* root , vector<TreeNode*>&path , TreeNode* x ){
        if(!root ) return false ;

        path.push_back(root) ;
        if(root == x) return true ;
        
        if (getpath(root->left , path , x ) || getpath(root->right , path , x )){
            return true ;
        }
        path.pop_back();
        return false ;

    }
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*>path1, path2 ;
        getpath(root , path1 , p);
        getpath(root , path2 , q) ;

        TreeNode* ans = nullptr;
        int i = 0;
        while(i < path1.size() && i < path2.size()){
            if(path1[i]!=path2[i]){
                break ;
            }
            ans = path1[i];
            i++;
        }
        return ans ;
    }
};