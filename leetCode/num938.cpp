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
    int ans =0;
    void bst(TreeNode* root, int low, int high){
        if(root== NULL) return ;
        if(root->val >=low && root->val <=high) ans+=root->val;
        if(root->left != nullptr) bst(root->left ,low,high);
        if(root->right != nullptr) bst(root->right ,low,high);
    }

    int rangeSumBST(TreeNode* root, int low, int high) {
        bst(root,low,high);
        return ans;
    }
};