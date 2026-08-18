class Solution {
public:
    int findSecondMinimumValue(TreeNode* root) {
        if (root == NULL) return -1;

        priority_queue<int, vector<int>, greater<int>> pq;
        queue<TreeNode*> q;

        q.push(root);

        while (!q.empty()) {
            int size = q.size();

            while (size--) {
                TreeNode* curr = q.front();
                q.pop();

                pq.push(curr->val);

                if (curr->left)
                    q.push(curr->left);

                if (curr->right)
                    q.push(curr->right);
            }
        }

        int firstMin = pq.top();
        pq.pop();

        while (!pq.empty() && pq.top() == firstMin) {
            pq.pop();
        }

        if (pq.empty())
            return -1;

        return pq.top();
    }
};