class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {

        // OptimL SOLUTION 
        if (head == nullptr)
            return head;

        ListNode* curr = head;
        ListNode* newhead = curr;
        while (curr != nullptr && curr->next != nullptr) {
            if (curr->val == curr->next->val) {
                ListNode* temp = curr->next;
                curr->next = temp->next;
                delete temp;
            } else
                curr = curr->next;
        }
        return newhead;
    }
};
