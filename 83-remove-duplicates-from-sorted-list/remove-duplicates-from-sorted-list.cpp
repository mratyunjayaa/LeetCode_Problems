class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL || head->next == NULL) return head; 
        
        vector<int> ans; 
        vector<int> org;
        
        // Copy linked list values into vector
        ListNode* dummy = head; 
        while(dummy){
            ans.push_back(dummy->val);
            dummy = dummy->next; 
        }
        
        // Two-pointer logic to collect unique values
        int slow = 1, fast = 1; 
        org.push_back(ans[0]);
        
        for(int i = 1; i < ans.size(); i++){
            if(ans[i] != ans[i-1]) {
                org.push_back(ans[i]);
            }
        }
        
        // Build new linked list from org
        ListNode* newhead = new ListNode(org[0]);
        ListNode* current = newhead; 
        for(int i = 1; i < org.size(); i++){
            current->next = new ListNode(org[i]);
            current = current->next; 
        }
        
        return newhead; 
    }
};
