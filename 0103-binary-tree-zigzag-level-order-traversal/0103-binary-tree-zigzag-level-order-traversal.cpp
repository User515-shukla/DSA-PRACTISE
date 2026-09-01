/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {

        vector<vector<int>>ans;
        if(root==nullptr)
           return ans;
        queue<TreeNode*>q;
        q.push(root);
        bool leftToright=true;
        vector<int>temp;
        while(!q.empty()){
            int Size=q.size();
            vector<int>row(Size);
            for(int i=0;i<Size;i++){
               TreeNode* temp= q.front();     
               q.pop();
               int index = (leftToright) ? i : (Size - 1 - i);
                row[index] = temp->val;
              
              if(temp->left!=nullptr)
                 q.push(temp->left);
              if(temp->right!=nullptr)
                 q.push(temp->right);
            

            }
            ans.push_back(row);
            leftToright = !leftToright;
        }
         return ans;

    }
};