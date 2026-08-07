class Solution {
    TreeNode* build(vector<int>& inorder, vector<int>& postorder,
                    int low, int high,
                    unordered_map<int,int>& mp, int& postIndex) {
        if (low > high) return nullptr;

        int val = postorder[postIndex--];
        TreeNode* root = new TreeNode(val);

        int pos = mp[val];

        root->right = build(inorder, postorder, pos + 1, high, mp, postIndex);
        root->left  = build(inorder, postorder, low, pos - 1, mp, postIndex);

        return root;
    }

public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        unordered_map<int,int> mp;
        for (int i = 0; i < inorder.size(); i++) {
            mp[inorder[i]] = i;
        }
        int postIndex = postorder.size() - 1;
        return build(inorder, postorder, 0, inorder.size() - 1, mp, postIndex);
    }
};
