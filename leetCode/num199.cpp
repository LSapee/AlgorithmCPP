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
    vector<int> depth;
    void go(int d,TreeNode* root){
        if(depth.size() == d)depth.push_back(root->val);
        if(root->right != NULL) go(d+1,root->right);
        if(root->left != NULL) go(d+1, root->left);
    }

    vector<int> rightSideView(TreeNode* root) {
        if(root==NULL)return depth;
        go(0,root);
        return depth;
    }
};