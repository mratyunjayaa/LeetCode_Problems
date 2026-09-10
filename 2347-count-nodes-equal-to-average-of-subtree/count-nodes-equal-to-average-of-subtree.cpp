class Solution {
public:

    int ans = 0;

    void solve(TreeNode* root, int &sum, int &count) {

        if (root == NULL) {
            sum = 0;
            count = 0;
            return;
        }

        int leftSum = 0;
        int leftCount = 0;

        int rightSum = 0;
        int rightCount = 0;

        solve(root->left, leftSum, leftCount);
        solve(root->right, rightSum, rightCount);

        // Current subtree ka sum
        sum = root->val + leftSum + rightSum;

        // Current subtree ke nodes
        count = 1 + leftCount + rightCount;

        // Average
        int average = sum / count;

        if (root->val == average) {
            ans++;
        }
    }

    int averageOfSubtree(TreeNode* root) {

        int sum = 0;
        int count = 0;

        solve(root, sum, count);

        return ans;
    }
};