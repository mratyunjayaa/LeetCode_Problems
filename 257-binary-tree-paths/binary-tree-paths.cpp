/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
    bool leaf(TreeNode* root) { return !root->left && !root->right; }
    void preorder(TreeNode* root, vector<string>& ans , string &str) {
        if (!root)
            return;
       int len = str.size();
        if(!str.empty()){
            str+="->";
        }
        str += to_string(root->val);
        if (leaf(root)) {
            ans.push_back(str);
        } else {
            preorder(root->left , ans ,str);
            preorder(root->right , ans , str ) ;
        }
        str.resize(len) ;
    }

public:
    vector<string> binaryTreePaths(TreeNode* root) {
        string str ;
        vector<string>ans ;
        if(!root) return ans ;
        preorder(root , ans , str) ;
        return ans ;
    }
};