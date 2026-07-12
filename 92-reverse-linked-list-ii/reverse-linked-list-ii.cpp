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
        if (head == nullptr)
            return head;
        if (left == right)
            return head;

        ListNode* curr = head;
        ListNode* prev = nullptr;
        for (int i = 1; i < left; i++) {
            prev = curr;
            curr = curr->next;
        }
        ListNode* connection = prev;
        ListNode* tail = curr;
        ListNode* next = nullptr;

        for (int i = 0; i < right - left + 1; i++) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        if (connection != nullptr)
            connection->next = prev;
        else
            head = prev;

        tail->next = curr;

        return head;
    }
};