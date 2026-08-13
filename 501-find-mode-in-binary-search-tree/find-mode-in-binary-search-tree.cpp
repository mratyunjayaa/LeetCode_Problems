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
    void inorder(TreeNode* root, vector<int>& in) {
        if (!root)
            return;
        inorder(root->left, in);
        in.push_back(root->val);
        inorder(root->right, in);
    }

public:
    vector<int> findMode(TreeNode* root) {
        vector<int> in;
        inorder(root, in);
        if (in.empty())
            return {};

        unordered_map<int, int> mp;
        int maxFreq = 0;
        for (int i = 0; i < in.size(); i++) {
            mp[in[i]]++;
            maxFreq = max(maxFreq, mp[in[i]]);
        }
        vector<int> ans;
        for (auto& it : mp) {
            if (it.second == maxFreq) {
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};