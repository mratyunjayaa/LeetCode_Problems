class Solution {
public:

    vector<int> parent, rankv;

    int find(int x) {
        if (parent[x] == x)
            return x;

        return parent[x] = find(parent[x]);
    }

    void unite(int a, int b) {
        a = find(a);
        b = find(b);

        if (a == b) return;

        if (rankv[a] < rankv[b]) {
            parent[a] = b;
        }
        else if (rankv[a] > rankv[b]) {
            parent[b] = a;
        }
        else {
            parent[b] = a;
            rankv[a]++;
        }
    }

    vector<vector<string>> accountsMerge(vector<vector<string>>& accounts) {

        int n = accounts.size();

        parent.resize(n);
        rankv.assign(n, 0);

        for (int i = 0; i < n; i++) {
            parent[i] = i;
        }

        // email -> account index
        unordered_map<string, int> mp;

        // Step 1: Union accounts having common email
        for (int i = 0; i < n; i++) {

            for (int j = 1; j < accounts[i].size(); j++) {

                string email = accounts[i][j];

                if (mp.count(email)) {
                    unite(i, mp[email]);
                }
                else {
                    mp[email] = i;
                }
            }
        }

        // Step 2: Group emails according to their parent
        unordered_map<int, vector<string>> groups;

        for (auto &[email, accountIndex] : mp) {

            int root = find(accountIndex);

            groups[root].push_back(email);
        }

        // Step 3: Build answer
        vector<vector<string>> ans;

        for (auto &[root, emails] : groups) {

            sort(emails.begin(), emails.end());

            vector<string> temp;

            temp.push_back(accounts[root][0]);

            for (string email : emails) {
                temp.push_back(email);
            }

            ans.push_back(temp);
        }

        return ans;
    }
};