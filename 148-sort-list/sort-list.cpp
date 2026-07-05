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
// brute force 
    ListNode* sortList(ListNode* head) {
        vector<int>ans;
        if(head==NULL) return head;
        ListNode*curr = head;
        while(curr){
            ans.push_back(curr->val);
            curr= curr->next ;
        }
        sort(ans.begin(), ans.end());

        ListNode*newHead = new ListNode(ans[0]);
        ListNode*tail=newHead;
        for(int i = 1 ; i < ans.size() ; i++){
            ListNode *temp = new ListNode(ans[i]);
            tail->next=temp;
            tail=tail->next;
        }
        return newHead;
    }
};