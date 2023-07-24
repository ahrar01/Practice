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
    TreeNode* helper(vector<int>& preorder, vector<int>& inorder, int rootIdx, int si, int end){ 
    if(si>end) return NULL;
    
    int rootData = preorder[rootIdx];
    TreeNode* root = new TreeNode(rootData);
    int inorderRootIdx = si;
    int i=0;
    while(inorder[inorderRootIdx]!=rootData) {
      i++;
      inorderRootIdx++; 
    } 
    // if(inorderRootIdx>end) return root;
    TreeNode* left = helper(preorder, inorder, rootIdx+1, si, inorderRootIdx-1);
    TreeNode*right = helper(preorder, inorder,  rootIdx+i+1, inorderRootIdx+1, end );
    root->left = left;
    root->right = right;
    return root;
  }

  TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
    return helper(preorder, inorder, 0, 0, inorder.size()-1);
  }
};