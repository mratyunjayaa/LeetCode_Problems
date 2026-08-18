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
public:
    vector<double> averageOfLevels(TreeNode* root) {
        if(root == NULL) return {} ;
        vector<double>v;
        queue<TreeNode*>q;

        q.push(root);

        while(!q.empty()){
            int size = q.size();
            int d = size;
            double avg = 0 ;
            while(size--){
                TreeNode* curr = q.front();q.pop();
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
                avg+=curr->val;
            }
             v.push_back(avg/d);
        }
        return v;
    }
};