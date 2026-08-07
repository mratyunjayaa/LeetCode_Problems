class Solution {
    void parent(TreeNode* root , unordered_map<TreeNode*, TreeNode*>&parent_track){
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            TreeNode* curr = q.front(); q.pop();
            if(curr->left) {
                parent_track[curr->left] = curr ;
                q.push(curr->left);
            }
            if(curr->right) {
                parent_track[curr->right] = curr ;
                q.push(curr->right);
            }
        }
    }
    TreeNode* find(TreeNode* root , int target){
        if(!root) return nullptr ;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            TreeNode* curr = q.front() ; q.pop() ;
            if(curr->val==target) return curr ;
            if(curr->left){
                q.push(curr->left) ;
            }
            if(curr->right){
                q.push(curr->right);
            }
        }
            return nullptr ;
    }
public:
    int amountOfTime(TreeNode* root, int start) {
        if(!root) return 0 ; 
        unordered_map<TreeNode*, TreeNode*>parent_track;
        parent(root,parent_track);
        TreeNode* targetNode = find(root , start );
        unordered_map<TreeNode* , bool> visit ;
        queue<TreeNode*>q;
        q.push(targetNode);
        visit[targetNode] = true ;
        int timer = 0 ; 
        while(!q.empty()){
            int size = q.size() ; 
            bool infected = false ;

            while(size--){
                TreeNode* curr = q.front() ; q.pop() ;

                if(curr->left && !visit[curr->left] ){
                    infected = true ;
                    q.push(curr->left);
                    visit[curr->left] = true ; 
                }
                if(curr->right && !visit[curr->right] ){
                    infected = true ;
                    q.push(curr->right);
                    visit[curr->right] = true ; 
                }
                if(parent_track[curr] && !visit[parent_track[curr]] ){
                    infected = true ;
                    q.push(parent_track[curr]);
                    visit[parent_track[curr]] = true ; 
                }
            }
            if(infected == true ) timer++;
        }
        return timer ;
    }
};