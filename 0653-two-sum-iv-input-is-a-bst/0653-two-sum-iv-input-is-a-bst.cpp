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
    void convertToArray(TreeNode* root,vector<int> &output){
        if(root==nullptr) return;
        output.push_back(root->val);
        convertToArray(root->left,output);
        convertToArray(root->right,output);
    }
    bool findTarget(TreeNode* root, int k) {
        vector<int> output;
        convertToArray(root,output);
        sort(output.begin(),output.end());
        int i=0 , j = output.size()-1;
        bool flag = false;
        while(i<j){
            if(output[i]+output[j]==k){
                ++i;
                --j;
                flag = true;
            }else if(output[i]+output[j]>k){
                --j;
            }else{
                ++i;
            }
        }
        return flag;
    }
};