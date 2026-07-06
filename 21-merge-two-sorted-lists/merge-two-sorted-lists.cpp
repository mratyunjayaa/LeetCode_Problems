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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // brute force 
        if(list1 == NULL && list2!=NULL)return list2;
        if(list1!= NULL && list2==NULL)return list1;
        if(list1== NULL && list2==NULL)return NULL;
        vector<int>v;
        ListNode * curr = list1 ;
        ListNode * curr2 = list2 ;
        while(curr){
            v.push_back(curr->val);
            curr = curr->next ;
        }
        while(curr2){
            v.push_back(curr2->val);
            curr2 = curr2->next ;
        }
        sort(v.begin(), v.end());
        ListNode * newhead = new ListNode(v[0]);
        ListNode * tail = newhead ;
        for(int i = 1 ; i< v.size();i++){
            ListNode*temp = new ListNode(v[i]);
            tail->next = temp ;
            tail= tail->next;
        }
        return newhead ;

    }
};