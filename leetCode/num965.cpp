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
    bool isUnivalTree(TreeNode* root) {
        int a = root->val;
        queue<TreeNode*> Q;
        Q.push(root);
        while(!Q.empty()){
            TreeNode* cur = Q.front();
            Q.pop();
            if(cur->val !=a) return false;
            if(cur->left !=NULL)Q.push(cur->left);
            if(cur->right !=NULL)Q.push(cur->right);
        }
        return true;
    }
};