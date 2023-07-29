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
    void helper(TreeNode* root,int &counter,int &ans, int k){
        if(root==NULL) return;

        helper(root->left,counter,ans,k);
        counter++;
        if(counter==k){
            ans = root->val;
            return;
        }
        helper(root->right,counter,ans,k);
    }
    int kthSmallest(TreeNode* root, int k) {
        int counter = 0;
        int ans;
        helper(root,counter,ans,k);
        return ans;
    }
};