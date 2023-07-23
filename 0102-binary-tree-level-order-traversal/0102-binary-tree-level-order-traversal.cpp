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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>  result;
        if (!root) return result;

	    queue<TreeNode*> pending;
        pending.push(root);
        pending.push(nullptr);
        vector<int> temp;
        while(pending.size()!=0){
            TreeNode* front = pending.front();
            pending.pop();
            if(front==nullptr){
                result.push_back(temp);
                temp.resize(0);
                if(pending.size()>0){
                    pending.push(nullptr);
                }
            }else{
                temp.push_back(front->val);
                if(front->left){
                    pending.push(front->left);
                }
                if(front->right){
                    pending.push(front->right);
                }
            }
            
        }

        return result;
        
    }
};