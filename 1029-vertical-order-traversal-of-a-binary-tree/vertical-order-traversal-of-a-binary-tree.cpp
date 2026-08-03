class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int , map<int , multiset<int>>>nodes; 
        queue<pair<TreeNode*,pair<int,int>>> q;
        q.push({root, {0, 0}}) ;

        while(!q.empty()){
           auto front = q.front();
           q.pop() ; 

           TreeNode* curr = front.first;
            int col = front.second.first;
            int row = front.second.second;

           nodes[col][row].insert(curr->val);

           if(curr->left)
              q.push({curr->left , {col-1 , row+1}}) ;
            
           if(curr->right)
              q.push({curr->right , {col+1 , row+1}}) ;
        }
        vector<vector<int>>v;

        for(auto column : nodes){
            vector<int>temp;
            for(auto row : column.second){
                temp.insert(temp.end() , row.second.begin(), row.second.end()) ;
            }

            v.push_back(temp);
        }
        return v;
    }
};