class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {

        if (root == NULL)
            return "";

        queue<TreeNode*> q;
        q.push(root);

        string ans = "";

        while (!q.empty()) {

            TreeNode* curr = q.front();
            q.pop();

            if (curr == NULL) {
                ans += "#,";
                continue;
            }

            ans += to_string(curr->val) + ",";

            q.push(curr->left);
            q.push(curr->right);
        }

        return ans;
    }


    // Decode
    TreeNode* deserialize(string data) {

        if (data == "")
            return nullptr;

        stringstream ss(data);
        string value;

        getline(ss, value, ',');

        TreeNode* root = new TreeNode(stoi(value));

        queue<TreeNode*> q;
        q.push(root);


        while (!q.empty()) {

            // Current parent
            TreeNode* curr = q.front();
            q.pop();


            // Left child
            getline(ss, value, ',');

            if (value != "#") {

                TreeNode* leftnode =
                    new TreeNode(stoi(value));

                curr->left = leftnode;

                q.push(leftnode);
            }


            // Right child
            getline(ss, value, ',');

            if (value != "#") {

                TreeNode* rightnode =
                    new TreeNode(stoi(value));

                curr->right = rightnode;

                q.push(rightnode);
            }
        }

        return root;
    }
};