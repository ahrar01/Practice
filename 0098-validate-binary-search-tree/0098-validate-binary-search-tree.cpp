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
    bool helper(TreeNode* root, int *min, int *max){
    //corner case
    if(root == NULL){
        return true;
    }
    
    if((min && root -> val <= *min) or  (max && root ->val >= *max)){
        return false;
    }
    
    bool left = helper(root -> left, min, &(root -> val)); // left subtree
    bool right = helper(root -> right, &(root -> val), max); // right subtree
    
    return left and right;
    }
    bool isValidBST(TreeNode* root) {
        return helper(root, NULL, NULL);
    }
};