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
    ListNode* deleteDuplicates(ListNode* head) {
        // Brute force

        map<int, int> freq;
        ListNode* curr = head;
        while (curr) {
            freq[curr->val]++;
            curr = curr->next;
        }
        ListNode* newhead = nullptr;
        ListNode* tail = nullptr;
        for (auto it : freq) {
            if (it.second == 1) {
                ListNode* temp = new ListNode(it.first);
                if(newhead==nullptr){
                    newhead = temp ;
                    tail = temp;
                }
                else{
                    tail->next = temp;
                    tail=temp;
                }
            }
        }
        return newhead;
    }
};