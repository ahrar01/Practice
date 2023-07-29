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

    void replace(TreeNode* root,int &sum){
        if(root==nullptr){
            return;
        }
        replace(root->right,sum);
        root->val+=sum;
        sum = root->val;
        replace(root->left,sum);
    }

    TreeNode* bstToGst(TreeNode* root) {
        int sum = 0;
        replace(root,sum);
        return root;
    }
};