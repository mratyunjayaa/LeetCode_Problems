/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
// tortoise and hare (slow and fast pointer )
    ListNode *detectCycle(ListNode *head) {
        if(head==nullptr || head->next==nullptr) return nullptr ; 
        ListNode* slow = head ; 
        ListNode* fast = head ; 
        bool IsCycle = false ; 
        while(fast!= nullptr && fast->next!= nullptr){
            slow = slow->next ; 
            fast = fast->next->next;
            if(slow==fast){
                IsCycle = true ; 
                break ;
            }
        }
        if(!IsCycle) return nullptr ; 

        slow = head; 

        while(slow != fast){
            slow=slow->next;
            fast = fast->next;
        }
        return slow ; 
    }
};