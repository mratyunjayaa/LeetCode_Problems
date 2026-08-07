class Solution {
    TreeNode* build (vector<int>& preorder, vector<int>& inorder , int low , int high ,
    unordered_map<int , int> &mp  , int &preIndex){
          if(low > high) return nullptr ;
          int val = preorder[preIndex++];
          int pos = mp[val];
          TreeNode* root = new TreeNode(val) ;

          root->left = build(preorder , inorder , low , pos-1 , mp , preIndex ) ;
          root->right = build(preorder , inorder , pos+1 , high , mp , preIndex ) ;
          return root ;

    }
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int , int> mp ;
        for(int i = 0 ;  i < inorder.size() ; i++){
            mp[inorder[i]] = i ;
        }
        int preIndex = 0;
        return build(preorder , inorder , 0 , inorder.size()-1 , mp , preIndex );
    }
};