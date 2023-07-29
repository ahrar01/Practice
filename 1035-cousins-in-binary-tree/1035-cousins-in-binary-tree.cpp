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
    bool _isCousins(TreeNode* root,int x,int y,int &d1,int &d2,int d){
        if(root==NULL)
            return false;
        if(root->left && root->right && ((root->left->val==x && root->right->val==y) || (root->left->val==y && root->right->val==x)))
            return false;
        if(root->val==x)
            d1=d;
        if(root->val==y)
            d2=d;
        if(d1!=-1 && d1==d2)
            return true;
        return _isCousins(root->left,x,y,d1,d2,d+1) || _isCousins(root->right,x,y,d1,d2,d+1);
            
    }
    bool isCousins(TreeNode* root, int x, int y) {
         if(NULL == root)
            return false;
        int d1=-1,d2=-1;
        return _isCousins(root,x,y,d1,d2,0);
    }
};