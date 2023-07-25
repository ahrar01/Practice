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
    TreeNode* helper(vector<int>& nums,int startIndex,int endIndex){
        if(startIndex>endIndex){
            return nullptr;
        }
        int mid = startIndex + (endIndex-startIndex)/2;
        TreeNode* root = new TreeNode(nums[mid]);
        root->left = helper(nums,startIndex,mid-1);
        root->right = helper(nums,mid+1,endIndex);
        return root;
    }

    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return helper(nums,0,nums.size()-1);
    }
};