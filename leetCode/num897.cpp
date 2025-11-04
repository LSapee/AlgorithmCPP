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
    void go(TreeNode* root, TreeNode*& temp, TreeNode*& ans){
        if(root == NULL)return;
        go(root->left,temp,ans);
        if(temp == NULL)ans = root;
        else temp -> right = root;
        root->left=NULL;
        temp=root;
        go(root->right,temp,ans);
    }
    TreeNode* increasingBST(TreeNode* root) {
        TreeNode* ans = NULL;
        TreeNode* temp = NULL;
        go(root,temp,ans);
        return ans;
    }
};