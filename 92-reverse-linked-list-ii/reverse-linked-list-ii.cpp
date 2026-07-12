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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        //bruteforce 
        if (left == 1 && right == 1)
            return head;
        vector<int> ans;
        ListNode* curr = head;
        while (curr) {
            ans.push_back(curr->val);
            curr = curr->next;
        }
        reverse(ans.begin() + left - 1, ans.begin() + right);

        ListNode* newHead = new ListNode(ans[0]);
        ListNode* tail = newHead;
        for (int i = 1; i < ans.size(); i++) {
            ListNode* temp = new ListNode(ans[i]);
            tail->next = temp;
            tail = tail->next;
        }
        return newHead;
    }
};