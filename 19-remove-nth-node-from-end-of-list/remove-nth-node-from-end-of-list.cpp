/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        vector<int> ans;
        vector<int> v;

        ListNode* curr = head;

        while (curr) {
            ans.push_back(curr->val);
            curr = curr->next;
        }

        reverse(ans.begin(), ans.end());

        ans[n - 1] = INT_MIN;

        for (auto it : ans) {
            if (it == INT_MIN)
                continue;
            v.push_back(it);
        }

        // Reverse back to original 
        reverse(v.begin(), v.end());
        if (v.empty())
            return NULL;

        ListNode* one = new ListNode(v[0]);
        ListNode* tail = one;

        for (int i = 1; i < v.size(); i++) {
            ListNode* temp = new ListNode(v[i]);
            tail->next = temp;
            tail = tail->next;
        }

        return one;
    }
};