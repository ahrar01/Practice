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
    int diameterOfBinaryTree(TreeNode* root) {
        int maxi = 0;
        diameter(root,maxi);
        return maxi;
    }

    int diameter(TreeNode* root, int &maxi){
        if(root==nullptr){
            return 0;
        }
        int leftLength = diameter(root->left,maxi);
        int rightLength = diameter(root->right,maxi);
        maxi = max(leftLength +rightLength,maxi);
        return max(leftLength ,rightLength) +1 ;
    }
};