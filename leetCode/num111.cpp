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
    int findMinDepth(TreeNode* root){
        if(root == NULL) return 0;
        if(root->left==NULL) return 1+findMinDepth(root->right);
        if(root->right==NULL) return 1+findMinDepth(root->left);
        return 1+min(findMinDepth(root->left),findMinDepth(root->right));
    }

    int minDepth(TreeNode* root) {
        return findMinDepth(root);
    }
};