class Solution {
public:
    int findSecondMinimumValue(TreeNode* root) {
        if(root==NULL) return 0;
       priority_queue<int,vector<int>,greater<int>>pq;
       queue<TreeNode*>q;
       q.push(root);
       while(!q.empty()){
        int size = q.size();
        while(size--){
            TreeNode* curr = q.front(); q.pop();
            if(curr->left) q.push(curr->left);
            if(curr->right) q.push(curr->right);
              pq.push(curr->val);
        }

       }
       int secMax = -1 ;
       int firstmax = pq.top() ; pq.pop();
       while(!pq.empty() && firstmax == pq.top() ){
        pq.pop();
       }
       if(!pq.empty()) secMax = pq.top();
       return secMax;
    }
};