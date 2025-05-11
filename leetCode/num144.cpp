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
    void makeBinaryTree(TreeNode* root,vector<int> &ans){
        if(root==NULL)return ;
        ans.push_back(root->val);
        makeBinaryTree(root->left,ans);
        makeBinaryTree(root->right,ans);
    }

    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        makeBinaryTree(root,ans);
        return ans;
    }
};