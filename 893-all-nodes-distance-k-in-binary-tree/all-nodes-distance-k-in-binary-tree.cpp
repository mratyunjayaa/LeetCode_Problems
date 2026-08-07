class Solution {
    void parents(TreeNode* root, unordered_map<TreeNode* , TreeNode*>&parent_track ){
        queue<TreeNode*>Q;
        Q.push(root);
        while(!Q.empty()){
            TreeNode* curr = Q.front(); Q.pop();
            if(curr->left){
                parent_track[curr->left] = curr ;
                Q.push(curr->left);
            }
            if(curr->right){
                parent_track[curr->right] = curr ;
                Q.push(curr->right);
            }
        }
    }
public:
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        if(!root) return {};
        unordered_map<TreeNode* , TreeNode*>parent_track ;
        parents(root, parent_track);
        unordered_map<TreeNode* , bool>visited ;
        queue<TreeNode*>Q;
        Q.push(target);
        visited[target] = true ;
        int level = 0 ;
        while(!Q.empty()){
            int size = Q.size();

            if(level == k) break ;  
            while(size--){

            TreeNode* curr = Q.front(); Q.pop();

            if(curr->left && !visited[curr->left]){
                Q.push(curr->left);
                visited[curr->left] = true ; 
            }
            if(curr->right && !visited[curr->right]){
                Q.push(curr->right);
                visited[curr->right] = true ; 
            }
            if(parent_track[curr] && !visited[parent_track[curr]]){
                Q.push(parent_track[curr]);
                visited[parent_track[curr]] = true ; 
            }
          }
            level++;
        }
        vector<int>ans;
        while(!Q.empty()){
             TreeNode* curr = Q.front(); Q.pop();
             ans.push_back(curr->val);
        }
        return ans;

    }
};