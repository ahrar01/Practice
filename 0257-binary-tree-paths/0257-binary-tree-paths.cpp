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
    void helper(vector<string>& result,TreeNode* root,string t){
        if(!root->left && !root->right){
            result.push_back(t);
        }
        if(root->left) helper(result,root->left,t+"->"+to_string(root->left->val));
        if(root->right) helper(result,root->right,t+"->"+to_string(root->right->val));
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        if(!root) return ans;
        helper(ans,root,to_string(root->val));
        return ans;
    }
};